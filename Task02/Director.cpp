#include "Director.h"

Director::Director()
{
}

Director::Director(Builder* build)
{
	this->build = build;
	
}

Cake* Director::Create()
{
	build->setFloure();
	build->setFilling();
	build->setEtc();
	return build->getCake();
}
