#pragma once
#include <iostream>
using std::string;
using std::cout;
using std::endl;
#define SIZE 3

class Cake
{

	string name;

public:
	Cake();
string parts[SIZE];
	void setPart(size_t index, string value);
	string getPart(size_t index);
	void Show();
};

