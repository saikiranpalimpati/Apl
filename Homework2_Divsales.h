#pragma once
class DivSales
{
	double array[4];
	static double totalsales;
public:
	DivSales();
	void quarterlySales(double, double, double, double);
	double* quarterlySales();
	double returnParticularsales(int);
	~DivSales();
};
