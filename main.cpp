#include <iostream>
#include <iomanip>
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

	int n_points = 5;
	int n_exp = 5;
	double x0[2 * n_points + 1];
	for (int i = 0; i <= 2 * n_points + 1; i++) {
		x0[i] = (double)(i - 5);
	}
	std::cout << x0[0] << std::endl;
	double exp[n_exp];
	for (int i = 0; i < n_exp; i++) {
		exp[i] = i;
	}
	double d[n_exp][2 * n_points + 1];
	for (int i = 0; i < n_exp; i++) {
		std::cout << "f(x) = x^" << (int)exp[i] << std::endl;
		for (int j = 0; j < 2 * n_points + 1; j++) {
			std::cout << "	x0 = " << std::setw(2) << x0[j];
			d[i][j] = derivative(&f, x0[j], {exp[i]});
			std::cout << "    f' = " << d[i][j] << std::endl;
		}
	}
	return 0;
}

double f(double x, std::vector<double> pars) {
	return pow(x, pars[0]);
}

