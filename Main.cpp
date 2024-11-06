#include "CallOption.h"
#include <iostream>

int main() {
	//x = Option(5.0);
	CallOption x = CallOption(1.0, 100.0);
	double y = x.payoff(160);
	std::cout << y;
	return 0;
}