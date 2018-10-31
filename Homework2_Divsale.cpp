#include "DivSales.h"



DivSales::DivSales()
{
	for (int i = 0; i < 4; i++)
	{
		array[i] = 0;
	}
}

void DivSales::quarterlySales(double first, double second, double third, double fourth)
{
	array[0] = first;
	array[1] = second;
	array[2] = third;
	array[3] = fourth;
	double sum = first + second + third + fourth;
	totalsales += sum;

}

double * DivSales::quarterlySales()
{

	return array;
}

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


DivSales::~DivSales()
{
}
