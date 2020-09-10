#include "Cake.h"

Cake::Cake()
{
}

void Cake::setPart(size_t index, string value)
{
	this->parts[index] = value;
}

string Cake::getPart(size_t index)
{
	return parts[index];
}

void Cake::Show()
{
	cout << "Name: " << this->name;
	cout << "Floure: " << this->parts[0] << endl;
	cout << "Filling: " << this->parts[1] << endl;
	cout << "Etc: " << this->parts[2] << endl;
}
