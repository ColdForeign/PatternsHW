#pragma once
#include "Cake.h"
#include <iostream>
class Builder abstract
{
public:
	Builder();
	virtual void setFloure() = 0;
	virtual void setFilling() = 0;
	virtual void setEtc() = 0;
	Cake* getCake();
	~Builder();
	Cake* cake;

};


