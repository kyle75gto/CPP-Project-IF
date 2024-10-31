#include "PutOption.h"

PutOption::PutOption(double expiry, double strike) : EuropeanVanillaOption(expiry, strike) {};

double PutOption::Payoff(double underlying_price) const{
	return std::max(GetStrike() - underlying_price, 0.0);
}

optionType PutOption::GetOptionType() const {
	return optionType::Put;
}