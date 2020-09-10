#pragma once
#include "Builder.h"
class CakeBuilder : public Builder
{
 	void setFloure() override;
    void setFilling() override;
    void setEtc() override;
};
class PunkcakeBuilder : public Builder
{
    void setFloure() override;
    void setFilling() override;
    void setEtc() override;
};
