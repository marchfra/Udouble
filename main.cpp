#include <iostream>
#include "Udouble.h"

int main() {
	Udouble x(10, 0.1);
	Udouble y(0, 0.1);
	std::cout << "x = " << x;
	std::cout << "y = " << y;
	std::cout << "x + y = " << x + y;
	std::cout << "x - y = " << x - y;
	std::cout << "x * y = " << x * y;
	std::cout << "x / y = " << x / y;

	return 0;
}
