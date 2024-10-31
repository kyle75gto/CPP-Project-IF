#include "CallOption.h"

CallOption::CallOption(double expiry, double strike) : EuropeanVanillaOption(expiry, strike){};

double CallOption::payoff(double underlying_price) const {
	return std::max(underlying_price - GetStrike(), 0.0);
}

optionType CallOption::GetOptionType() const{
	return optionType::Call;
}
