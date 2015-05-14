#pragma once

class NewtonInterpolation{
private:
	int n;
	double *points;
	double *values;
	double iteration(int n, int m);
public:
	NewtonInterpolation(int n, double *points, double *values);
	double operator()(double x);
};