#include "LagrangeInterpolation.h"

LagrangeInterpolation::LagrangeInterpolation(int n, double *points, double *values){
	this->n = n;
	this->points = new double[n];
	this->values = new double[n];
	for(int i=0;i<n;i++){
		this->points[i] = points[i];
		this->values[i] = values[i];
	}
}

double LagrangeInterpolation::operator()(double x){
	double sum = 0;
	for(int i=0;i<n;i++){
		double p = 1;
		for(int j=0;j<n;j++)
			if(j!=i){
				p*=(x-points[j])/(points[i] - points[j]);	
			}
		p*=values[i];
		sum += p;
	}
	return sum;
}