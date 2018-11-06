/*
  SAIKIRAN PALIMPATI
  ADVANCED PROGRAMMING LANG CONCEPTS
  ASSIGNMENT - 4
*/
/*
  IN THIS PROGRAM A CLASS IS CREATED AND NAMED AS DIVSALES 
  IT HAS METHODS WHICH ALLOW STORNG OF DATA ABOUT THE SALES
  FOUR QUARTERS IN EACH DIVISION AND THEN GIVE US THE TOTAL
  SALES FOR ALL THE DIVISIONS IN THAT YEAR
*/
//header files
#include "DivSales.h"
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	DivSales s[6];//array to store 6 objects
	//loop to take the user input 
	for (int i = 0; i < 6; i++)
	{
		cout << "enter sales of division "<<i<<" for four quarters" << endl;
		double one, two, three, four;
		cin >> one >> two >> three >> four;
		//store it in an array
		s[i].quarterlySales(one, two, three, four);
	}
	cout << endl;
	//display the table
	cout << "THE TABLE BELOW SHOW THE SALES OF EACH DIVISION FOR FOUR QUARTER" << endl << endl;;
	cout << "Div No. "<<setw(20)<<"first quarter"<< setw(20) << "second quarter" << setw(20) << "third quarter" << setw(20) << "fourth quarter" << endl;

	for (int i = 0; i < 6; i++)
	{
		double * p = s[i].quarterlySales();
		cout << i;
		for (int j = 0; j < 4; j++)
		{
			cout << setw(20) << p[j];
		}
		cout << endl;
	}
	cout << endl;
	//display the total corporate sales
	cout << "THE TOTAL CORPORATE SALES FOR THI YEAR  " << s[1].returnTotalsales() << endl;
	system("pause");
	return 0;
}
