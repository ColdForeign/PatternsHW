#pragma once
#include <iostream>
#include <vector>
using std::string;
using std::vector;
using std::cout;
using std::endl;
#define SIZE 3

class Cake
{
protected:
	string name;
	string parts[SIZE];

public:
	void setPart(size_t index, string value)
	{
		this->parts[index] = value;
	}

	string getPart(size_t index)
	{
		return this->parts[index];
	}

	void Show()
	{
		cout << "Name: " << this->name;
		cout << "Dough: " << this->parts[0] << endl;
		cout << "Ñream: " << this->parts[1] << endl;
		cout << "Decor: " << this->parts[2] << endl;
	}
};

