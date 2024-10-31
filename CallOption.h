#pragma once
#include "EuropeanVanillaOption.h"
class CallOption :
    public EuropeanVanillaOption
{
public:
    CallOption(double, double);
    double payoff(double) const override;
    optionType GetOptionType() const override;
};

