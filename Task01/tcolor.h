#pragma once
#include <windows.h>
static HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

namespace ConsoleColors
{
	enum ConsoleColor
	{
		Black = 0,
		Blue,
		Green,
		Cyan,
		Red,
		Purple,
		Brown,
		LightGray,
		DarkGray,
		LightBlue,
		LightGreen,
		LightCyan,
		LightRed,
		LightPurple,
		Yellow,
		White = 15
	};

}

inline void SetColor(ConsoleColors::ConsoleColor color)
{
	SetConsoleTextAttribute(hConsole, WORD(color));
}

inline void SetColor(size_t color)
{
	SetConsoleTextAttribute(hConsole, WORD(color));
}
