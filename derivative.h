//
// Created by Francesco Marchisotti  on 19/11/21.
//

#ifndef UDOUBLE_DERIVATIVE_H
#define UDOUBLE_DERIVATIVE_H

#include <vector>

double derivative(double (*func)(double x, std::vector<double> args),
				  double x0, const std::vector<double>& args = {}, double dx = 1.0, int n = 1, int order = 3);

#endif //UDOUBLE_DERIVATIVE_H
