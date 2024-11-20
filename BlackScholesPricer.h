#pragma once
#include "EuropeanVanillaOption.h"



 inline double normalCDF(double x) // Phi(-∞, x) aka N(x)
{
	return std::erfc(-x / std::sqrt(2)) / 2;
}

class BlackScholesPricer
{
private:
	EuropeanVanillaOption* _option;
	double _asset_price;
	double _interest_rate;
	double _volatility;
public:
	BlackScholesPricer(EuropeanVanillaOption* option, double asset_price, double interest_rate, double volatility);
	double operator()() const;
	double delta() const;
};

