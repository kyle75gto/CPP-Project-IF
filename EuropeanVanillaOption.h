#pragma once
#include "Option.h"

enum class optionType { Call, Put };

class EuropeanVanillaOption :
    public Option
{
private:
    double _strike;
    friend class BlackScholesPricer;
public:
    EuropeanVanillaOption(double, double);
    double GetStrike() const;
    virtual optionType GetOptionType() const = 0;
};

