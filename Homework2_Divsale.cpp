#include "DivSales.h"
//static variable access in .cpp
double DivSales::totalsales;
//default construtor to initialise all the values in 
//the dividion sales array to 0.0
DivSales::DivSales()
{
	for (int i = 0; i < 4; i++)
	{
		salesForDivision[i] = 0.0;
	}
	sum = 0;
}

//method declaration to store the four sales in each 
//division array
void DivSales::quarterlySales(double first, double second, double third, double fourth)
{
	salesForDivision[0] = first;
	salesForDivision[1] = second;
	salesForDivision[2] = third;
	salesForDivision[3] = fourth;
    sum = first + second + third + fourth;
	totalsales += sum;
}

//method to return the array
double * DivSales::quarterlySales()
{

	return salesForDivision;
}

//method to return the sale of particular quarter 
double DivSales::returnParticularsales(int i)
{
	double sales;
	if (i >= 0 || i <= 3)
	{
		sales = salesForDivision[i];
	}
	else
	{
		sales = -1;
	}
	return sales;
}

//method to return the total sales
double DivSales::returnTotalsales()
{
	return totalsales;
}




DivSales::~DivSales()
{
}
