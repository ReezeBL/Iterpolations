#include "AitkenInterpolation.h"

AitkenInterpolation::AitkenInterpolation(int n, double *points, double *values){
	this->n = n;
	this->points = new double[n];
	this->values = new double[n];
	for(int i=0;i<n;i++){
		this->points[i] = points[i];
		this->values[i] = values[i];
	}
}

double AitkenInterpolation::operator()(double x){
	return iteration(0,n-1,x);
}

double AitkenInterpolation::iteration(int n, int m, double x){
	if(m==n) return values[n];
	return ((x-points[n])*iteration(n+1,m,x) - (x-points[m])*iteration(n,m-1,x))/(points[m]-points[n]);
}
