#pragma once

class AitkenInterpolation{
private:
	int n;
	double *points;
	double *values;
	double iteration(int n, int m, double x);
public:
	AitkenInterpolation(int n, double *points, double *values);
	double operator()(double x);
};