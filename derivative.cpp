//
// Created by Francesco Marchisotti  on 19/11/21.
//

#include <iostream>
#include <cmath>
#include "derivative.h"

double derivative(double (*func)(double x, std::vector<double> args), double x0, const std::vector<double>& args, double dx, int n, int order) {
	// Check validity of all arguments.
	/*try {
		if (order < n + 1) {
			throw 1;
		}

		if (order % 2 == 0) {
			throw 2;
		}
	} catch (int e) {
		if (e == 1) {
			std::cout << "'order' (the number of points used to compute the derivative), "
						 "must be at least the derivative order 'n' + 1.";
		} else if (e == 2) {
			std::cout << "'order' (the number of points used to compute the derivative) must be odd.";
		}
		exit(1);
	}*/

	int weights[3] = {-1/2, 0, 1/2};

	double val = 0.0;
	int ho = order >> 1;
	for (int k = 0; k < order; k++) {
		val += weights[k] * func(x0 + (k - ho) * dx, args);
	}
	return val / pow(dx, n);
}