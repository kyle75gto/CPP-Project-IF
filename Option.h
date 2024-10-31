#pragma once
#include <stdexcept>
#include <algorithm>
#include <cmath>

class Option
{
private:
	double _expiry;

public:
	Option(double);
	double get_expiry() const;
	virtual double payoff(double) const = 0;

};

