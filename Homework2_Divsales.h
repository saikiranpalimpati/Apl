#pragma once

class DivSales
{ 
	//array to hold the sales of four quarters
	double salesForDivision[4];
	//variable to store the total of each division
	double sum ;
	//static variable to hold all the sales in each division
	static double totalsales;

public:
	//default constructor
	DivSales();
	//method to initialise the values to array
	void quarterlySales(double, double, double, double);
	//method to return the array
	double* quarterlySales();
	//method to return sales of particular qaurter
	double returnParticularsales(int);
	//method to return the total sales
	double returnTotalsales();
	~DivSales();
};






