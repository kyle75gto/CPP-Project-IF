#pragma once
#include "EuropeanVanillaOption.h"
class PutOption :
    public EuropeanVanillaOption
{
public:
    PutOption(double, double);
    double Payoff(double) const;
    optionType GetOptionType() const override;
};

