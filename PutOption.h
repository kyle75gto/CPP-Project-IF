#pragma once
#include "EuropeanVanillaOption.h"
class PutOption :
    public EuropeanVanillaOption
{
public:
    PutOption(double, double);
    double payoff(double) const override;
    optionType GetOptionType() const override;
};

