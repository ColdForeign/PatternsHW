#pragma once
#include <iostream>
#include "tcolor.h";
using namespace ConsoleColors;

enum class OSType
{
	WINDOWS,
	LINUX,
	MACOS,
	NONE
};

class Object abstract 
{
public:
	virtual void show() = 0;
	void SetTextColor(ConsoleColor color = ConsoleColor::Cyan) 
	{
		this->color = color;
	}
protected:
	ConsoleColor color;
};

class Cursor abstract : public Object
{
public:
	virtual void use() = 0;
};

class Window abstract : public Object
{
public:
	virtual void use() = 0;
};

class Menu abstract : public Object
{
public:
	virtual void use() = 0;
};

class Button abstract : public Object
{
public:
	virtual void use() = 0;
};

class AbstractFactory abstract
{
public:
	virtual Cursor* createCursor() = 0;
	virtual Menu* createMenu() = 0;
	virtual Window* createWindow() = 0;
	virtual Button* createButton() = 0;
};

//windows
class WindowsCursor : public Cursor
{
public:
	void show() override;
	void use() override;
	
};

class WindowsWindow : public Window
{
public:
	void show() override;
	void use() override;
};

class WindowsMenu : public Menu
{
public:
	void show() override;
	void use() override;
}; 

class WindowsButton : public Button
{
public:
	void show() override;
	void use() override;
};

class WindowsFactory : public AbstractFactory
{
public:

	Cursor* createCursor() override;
	Window* createWindow() override;
	Menu* createMenu() override;
	Button* createButton() override;

};

//linux
class LinuxCursor : public Cursor
{
public:
	void show() override;
	void use() override;

};

class LinuxWindow : public Window
{
public:
	void show() override;
	void use() override;
};

class LinuxMenu : public Menu
{
public:
	void show() override;
	void use() override;
};

class LinuxButton : public Button
{
public:
	void show() override;
	void use() override;
};

class LinuxFactory : public AbstractFactory
{
public:
	Cursor* createCursor() override;
	Window* createWindow() override;
	Menu* createMenu() override;
	Button* createButton() override;
};

//macos

class MacOSButton : public Button
{
public:
	void show() override;
	void use() override;
};

class MacOSWindow : public Window
{
public:
	void show() override;
	void use() override;
};

class MacOSCursor : public Cursor
{
public:
	void show() override;
	void use() override;
};

class MacOSMenu : public Menu
{
public:
	void show() override;
	void use() override;
};

class MacOSFactory : public AbstractFactory
{
public:
	Cursor* createCursor() override;
	Window* createWindow() override;
	Menu* createMenu() override;
	Button* createButton() override;
};

