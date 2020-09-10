#include "Builder.h"

Builder::Builder()
{
    cake = new Cake;
}

Cake* Builder::getCake()
{
    return this->cake;
}

Builder::~Builder()
{
    delete cake;
}
