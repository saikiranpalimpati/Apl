#include "DivSales.h"
#include<iostream>
using namespace std;
int main()
{
	DivSales s;
	s.quarterlySales(1, 2, 3, 4);
	double * p=s.quarterlySales();
	for (int i = 0; i < 4; i++)
	{
		cout << p[i] << endl;

	}
	system("pause");
	return 0;
}
