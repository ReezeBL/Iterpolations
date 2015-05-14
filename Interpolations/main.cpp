#include <iostream>
#include "LagrangeInterpolation.h"
#include "AitkenInterpolation.h"
#include "NewtonInterpolation.h"
using namespace std;


int main(){
	setlocale(0,"Russian");
	int n;
	cout << "Введи количество точек интерполяции: ";
	cin >> n;
	double *points = new double[n], *values = new double[n];
	cout << "Введите точки интерполяции: " << endl;
	for(int i=0;i<n;i++)
		cin >> points[i] >> values[i];
	LagrangeInterpolation L(n,points,values);
	AitkenInterpolation A(n,points,values);
	NewtonInterpolation N(n,points,values);
	double x;
	cout << "Введите точку расчета: ";
	cin >> x;
	cout << "В данной точке значение полинома Лагранжа - " << L(x) << endl;
	cout << "В данной точке значение полинома Эйткена - " << A(x) << endl;
	cout << "В данной точке значение полинома Ньютона - " << N(x) << endl;
	return 0;
}