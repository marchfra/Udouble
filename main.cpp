#include <iostream>
#include <vector>
#include <cmath>
#include "Udouble.h"
#include "derivative.h"

double f(double x, std::vector<double> pars);

int main() {
	Udouble x(10, 0.1);
	Udouble y(0, 0.1);
	std::cout << "x = " << x;
	std::cout << "y = " << y;
	std::cout << "x + y = " << x + y;
	std::cout << "x - y = " << x - y;
	std::cout << "x * y = " << x * y;
	std::cout << "x / y = " << x / y;


	double x0[] = {0, -1, 1, 2};
	double d;
	for (double i : x0) {
		std::cout << "f(" << i << ") = " << f(i, {}) << std::endl;
		d = derivative(&f, i);
		std::cout << "d(x*x)/dx(" << i << ") = " << d << std::endl;
	}
	return 0;
}

double f(double x, std::vector<double> pars) {
	return x * x;
}

