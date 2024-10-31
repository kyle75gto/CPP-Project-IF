#include "Option.h"

double Option::get_expiry() const {
	return _expiry;
};

Option::Option(double expiry) : _expiry(expiry) {};





