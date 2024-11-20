#include "BlackScholesPricer.h"

BlackScholesPricer::BlackScholesPricer(EuropeanVanillaOption* option, double asset_price, double interest_rate, double volatility) : _option(option), _asset_price(asset_price), _interest_rate(interest_rate), _volatility(volatility) {};

double BlackScholesPricer::operator()() const {
	double d1 = (1 / (_volatility * std::sqrt(_option->get_expiry()))) * (std::log(_asset_price / _option->_strike) + _option->get_expiry() * (_interest_rate + 0.5 * _volatility * _volatility));
	double d2 = d1 - _volatility * std::sqrt(_option->get_expiry());

	if (_option->GetOptionType() == optionType::Call) {
		return _asset_price * normalCDF(d1) - _option->_strike * std::exp(-_interest_rate * _option->get_expiry()) * normalCDF(d2);
	}
	else {
		return  _option->_strike * std::exp(-_interest_rate * _option->get_expiry()) * normalCDF(-d2) - _asset_price * normalCDF(-d1);
	}
}

double BlackScholesPricer::delta() const {
	double d1 = (1 / (_volatility * std::sqrt(_option->get_expiry()))) * (std::log(_asset_price / _option->_strike) + _option->get_expiry() * (_interest_rate + 0.5 * _volatility * _volatility));

	if (_option->GetOptionType() == optionType::Call) {
	return normalCDF(d1);
	}
	else {
	return -normalCDF(-d1);
	}
}
