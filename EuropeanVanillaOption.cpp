#include "EuropeanVanillaOption.h"

EuropeanVanillaOption::EuropeanVanillaOption(double expiry, double strike) : Option(expiry), _strike(strike) {

	if ((strike < 0)||(expiry<0)) {
		throw std::invalid_argument(" Strike < 0 or Expiry < 0");
	};
};

double EuropeanVanillaOption::GetStrike() const{
	return _strike;
}

