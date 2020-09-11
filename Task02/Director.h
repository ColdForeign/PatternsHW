#pragma once
#include "Builder.h"

class Director
{
private:
	Builder* builder;
public:
	Director()
	{
		this->builder = nullptr;
	}

	Director(Builder* build) 
	{
		this->builder = build;
	}

	Cake* Create()
	{
		if (this->builder != nullptr)
		{
			this->builder-> setDough();
			this->builder->set�ream();
			this->builder->setDecor();
			return this->builder->getProduct();
		}
		
	}
};

