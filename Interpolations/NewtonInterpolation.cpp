#include "NewtonInterpolation.h"

NewtonInterpolation::NewtonInterpolation(int n, double *points, double *values){
	this->n = n;
	this->points = new double[n];
	this->values = new double[n];
	for(int i=0;i<n;i++){
		this->points[i] = points[i];
		this->values[i] = values[i];
	}
}

double NewtonInterpolation::operator()(double x){
	double sum = 0;
	for(int i=0;i<n;i++){
		double p = 1;
		p*=iteration(0,i);
		for(int j=0;j<i;j++)
			p*=(x-points[j]);
		sum+=p;
	}
	return sum;
}

double NewtonInterpolation::iteration(int n, int m){
	if(m==n) return values[n];
	return (iteration(n+1,m) - iteration(n,m-1))/(points[m]-points[n]);
}
