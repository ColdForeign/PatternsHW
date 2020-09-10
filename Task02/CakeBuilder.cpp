#include "CakeBuilder.h"

void CakeBuilder::setFloure()
{
	Builder::cake->setPart(0, "white");
}

void CakeBuilder::setFilling()
{
	Builder::cake->setPart(1, "chockolate");
}

void CakeBuilder::setEtc()
{
	Builder::cake->setPart(2, "strawberry");

}

void PunkcakeBuilder::setFloure()
{
	Builder::cake->setPart(0, "buisquits");
}

void PunkcakeBuilder::setFilling()
{
	Builder::cake->setPart(1, "beze");
}

void PunkcakeBuilder::setEtc()
{
	Builder::cake->setPart(2, "pineapple");
}
