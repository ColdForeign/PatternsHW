#include "AbstractFactory.h"
#include "tinyxml2.h"
#include <vector>
using std::vector;
#pragma warning(disable : 26812)

OSType getOSTypeFromFile(std::string file);
namespace xml = tinyxml2;

#define CHECK_WINDOWS (type == "Windows" || type == "windows" || type == "WINDOWS" || type == "win" || type == "WIN")
#define CHECK_LINUX (type == "Linux" || type == "LINUX" || type == "linux")
#define CHECK_MACOS (type == "mac" || type == "MACOS" || type == "macos" || type == "macOS" )

int main()
{
	AbstractFactory* factory = nullptr;

	Cursor* cursor = nullptr;
	Menu* menu = nullptr;
	Window* window = nullptr;
	Button* button = nullptr;

	OSType type = getOSTypeFromFile("os.xml");

	switch (type)
	{
	case OSType::WINDOWS:
		factory = new WindowsFactory;
		break;
	case OSType::LINUX:
		factory = new LinuxFactory;
		break;
	case OSType::MACOS:
		factory = new MacOSFactory;
		break;
	case OSType::NONE:
		std::cout << "Error: file not found\n";
		break;
	}

	if (factory != nullptr)
	{
		menu = factory->createMenu();
		window = factory->createWindow();
		cursor = factory->createCursor();
		button = factory->createButton();
	}

	delete factory;
	factory = nullptr;

	size_t size = 4;
	vector <Object*> objects = { menu , window, cursor, button };

	for (size_t i = 0; i < size; i++)
		if (objects[i] != nullptr)
			objects[i]->show();
	std::cout << std::endl;

	menu->use();
	window->use();
	cursor->use();
	button->use();

	objects.clear();


	return 0;
}

OSType getOSTypeFromFile(std::string file)
{
	xml::XMLDocument doc;

	if (doc.LoadFile(file.c_str()) == xml::XMLError::XML_ERROR_FILE_NOT_FOUND)
		return OSType::NONE;

	if (doc.LoadFile(file.c_str()) == xml::XMLError::XML_ERROR_FILE_READ_ERROR)
		return OSType::NONE;

	if (doc.FirstChildElement("settings") == nullptr)
		return OSType::NONE;

	xml::XMLElement* element = doc.FirstChildElement("settings");
	if (element == nullptr)
		return OSType::NONE;

	if (element->FirstChildElement("OS") == nullptr)
		return OSType::NONE;

	element = element->FirstChildElement("OS");
	if (element == nullptr)
		return OSType::NONE;

	if (element->FindAttribute("type") == nullptr)
		return OSType::NONE;

	std::string type = element->FindAttribute("type")->Value();

	if (CHECK_WINDOWS)
		return OSType::WINDOWS;
	else if (CHECK_LINUX)
		return OSType::LINUX;
	else if (CHECK_MACOS)
		return OSType::MACOS;

	return OSType::NONE;
}
