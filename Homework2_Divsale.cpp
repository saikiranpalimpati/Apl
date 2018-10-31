#include "DivSales.h"



DivSales::DivSales()
{
	for (int i = 0; i < 4; i++)
	{
		salesForDivision[i] = 0;
	}
}

void DivSales::quarterlySales(double first, double second, double third, double fourth)
{
	salesForDivision[0] = first;
	salesForDivision[1] = second;
	salesForDivision[2] = third;
	salesForDivision[3] = fourth;
	double sum = first + second + third + fourth;
	totalsales += sum;

}

double * DivSales::quarterlySales()
{

	return salesForDivision;
}
/*
double DivSales::returnParticularsales(int i)
{
	double sales;
	if (i >= 0 || i <= 3)
	{
		sales = array[i];
	}
	else
	{
		sales = -1;
	}
	return sales;
}
*/

DivSales::~DivSales()
{
}
