#include "AbstractFactory.h"

//windows

void WindowsCursor::show()
{
	SetColor(this->color);
	std::cout << "[Windows] Cursor shown\n";
	SetColor(White);

}

void WindowsCursor::use()
{
	SetColor(this->color);
	std::cout << "[Windows] Cursor used\n";
	SetColor(White);
}

void WindowsWindow::show()
{
	SetColor(this->color);
	std::cout << "[Windows] Window shown\n";
	SetColor(White);
}

void WindowsWindow::use()
{
	SetColor(this->color);
	std::cout << "[Windows] Window used\n";
	SetColor(White);
}

void WindowsMenu::show()
{
	SetColor(this->color);
	std::cout << "[Windows] Menu shown\n";
	SetColor(White);
}

void WindowsMenu::use()
{
	SetColor(this->color);
	std::cout << "[Windows] Menu used\n";
	SetColor(White);
}

void WindowsButton::show()
{
	SetColor(this->color);
	std::cout << "[Windows] Button shown\n";
	SetColor(White);
}

void WindowsButton::use()
{
	SetColor(this->color);
	std::cout << "[Windows] Button used\n";
	SetColor(White);
}

Cursor* WindowsFactory::createCursor()
{
	Cursor* cursor = new WindowsCursor;
	cursor->SetTextColor();
	return cursor;
}

Window* WindowsFactory::createWindow()
{
	Window* window = new WindowsWindow;
	window->SetTextColor();
	return window;
}

Menu* WindowsFactory::createMenu()
{
	Menu* menu = new WindowsMenu;
	menu->SetTextColor();
	return menu;
}

Button* WindowsFactory::createButton()
{
	Button* button = new WindowsButton;
	button->SetTextColor();
	return button;
}

//linux
void LinuxMenu::show()
{
	SetColor(this->color);
	std::cout << "[Linux] Cursor shown\n";
	SetColor(White);
}

void LinuxMenu::use()
{
	SetColor(this->color);
	std::cout << "[Linux] Cursor used\n";
	SetColor(White);
}

void LinuxWindow::show()
{
	SetColor(this->color);
	std::cout << "[Linux] Window shown\n";
	SetColor(White);
}

void LinuxWindow::use()
{
	SetColor(this->color);
	std::cout << "[Linux] Window used\n";
	SetColor(White);
}

void LinuxCursor::show()
{
	SetColor(this->color);
	std::cout << "[Linux] Cursor shown\n";
	SetColor(White);

}

void LinuxCursor::use()
{
	SetColor(this->color);
	std::cout << "[Linux] Cursor used\n";
	SetColor(White);

}

void LinuxButton::show()
{
	SetColor(this->color);
	std::cout << "[Linux] Button shown\n";
	SetColor(White);

}

void LinuxButton::use()
{
	SetColor(this->color);
	std::cout << "[Linux] Button used\n";
	SetColor(White);

}

Cursor* LinuxFactory::createCursor()
{
	Cursor* cursor = new LinuxCursor;
	cursor->SetTextColor(LightBlue);
	return cursor;
}

Window* LinuxFactory::createWindow()
{
	Window* window = new LinuxWindow;
	window->SetTextColor(LightBlue);
	return window;
}

Menu* LinuxFactory::createMenu()
{
	Menu* menu = new LinuxMenu;
	menu->SetTextColor(LightBlue);
	return menu;
}

Button* LinuxFactory::createButton()
{
	Button* button = new LinuxButton;
	button->SetTextColor(LightBlue);
	return button;
}

//macos

void MacOSCursor::show()
{
	SetColor(this->color);
	std::cout << "[MacOS] Cursor shown\n";
	SetColor(White);
}

void MacOSCursor::use()
{
	SetColor(this->color);
	std::cout << "[MacOS] Cursor used\n";
	SetColor(White);
}

void MacOSWindow::show()
{
	SetColor(this->color);
	std::cout << "[MacOS] Window shown\n";
	SetColor(White);
}

void MacOSWindow::use()
{
	SetColor(this->color);
	std::cout << "[MacOS] Window used\n";
	SetColor(White);
}

void MacOSMenu::show()
{
	SetColor(this->color);
	std::cout << "[MacOS] Menu shown\n";
	SetColor(White);
}

void MacOSMenu::use()
{
	SetColor(this->color);
	std::cout << "[MacOS] Menu used\n";
	SetColor(White);
}

void MacOSButton::show()
{
	SetColor(this->color);
	std::cout << "[MacOS] Button shown\n";
	SetColor(White);
}

void MacOSButton::use()
{
	SetColor(this->color);
	std::cout << "[MacOS] Button used\n";
	SetColor(White);
}

Cursor* MacOSFactory::createCursor()
{
	Cursor* cursor = new MacOSCursor;
	cursor->SetTextColor(LightGreen);
	return cursor;
}

Window* MacOSFactory::createWindow()
{
	Window* window = new MacOSWindow;
	window->SetTextColor(LightGreen);
	return window;
}

Menu* MacOSFactory::createMenu()
{
	Menu* menu = new MacOSMenu;
	menu->SetTextColor(LightGreen);
	return menu;
}

Button* MacOSFactory::createButton()
{
	Button* button = new MacOSButton;
	button->SetTextColor(LightGreen);
	return button;
	return new MacOSButton;
}
