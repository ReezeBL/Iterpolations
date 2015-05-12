#include <iostream>
#include "LagrangeInterpolation.h"
#include "AitkenInterpolation.h"
using namespace std;


int main(){
	setlocale(0,"Russian");
	int n;
	cout << "����� ���������� ����� ������������: ";
	cin >> n;
	double *points = new double[n], *values = new double[n];
	cout << "������� ����� ������������: " << endl;
	for(int i=0;i<n;i++)
		cin >> points[i] >> values[i];
	LagrangeInterpolation L(n,points,values);
	AitkenInterpolation A(n,points,values);
	double x;
	cout << "������� ����� �������: ";
	cin >> x;
	cout << "� ������ ����� �������� �������� �������� - " << L(x) << endl;
	cout << "� ������ ����� �������� �������� �������� �� ������ ������� - " << A(x) << endl;
	return 0;
}