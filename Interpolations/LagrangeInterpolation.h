#pragma once

class LagrangeInterpolation{
private:
	int n;
	double *points;
	double *values;
public:
	LagrangeInterpolation(int n, double *points, double *values);
	double operator()(double x);
};