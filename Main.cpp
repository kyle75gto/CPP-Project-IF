#include "CallOption.h"
#include "PutOption.h"
#include <iostream>
#include "BlackScholesPricer.h"

int main() {
	PutOption x(5, 101);
	BlackScholesPricer pricer(&x, 100, 0.01, 0.1) ;
	std::cout << pricer() << std::endl << "delta :" << pricer.delta() <<std::endl;
	return 0;
}	