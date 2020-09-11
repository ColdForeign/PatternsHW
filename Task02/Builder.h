#pragma once
#include "Cake.h"
#include <iostream>
class Builder abstract
{
protected:
	Cake* cake;
public:
	Builder()
	{
		this->cake = new Cake();
	}

	virtual void setDough() = 0;
	virtual void setÑream() = 0;
	virtual void setDecor() = 0;

	void reset()
	{
		this->cake = new Cake();
	}

	Cake* getProduct()
	{
		Cake* result = this->cake;
		this->reset();
		return result;
	}

	~Builder()
	{
		delete this->cake;
	}
};


