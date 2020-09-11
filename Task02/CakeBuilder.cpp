#include "CakeBuilder.h"

void CakeBuilder::setDough()
{
	this->cake->setPart(0, "nut");
}

void CakeBuilder::setÑream()
{
	this->cake->setPart(1, "creamy chocolate");
}

void CakeBuilder::setDecor()
{
	this->cake->setPart(2, "candied fruit");
}

void PunkcakeBuilder::setDough()
{
	this->cake->setPart(0, "buisquits");
}

void PunkcakeBuilder::setÑream()
{
	this->cake->setPart(1, "honey");
}

void PunkcakeBuilder::setDecor()
{
	this->cake->setPart(2, "pineapple");
}
