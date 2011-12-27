#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main(array<System::String ^> ^args)
{
	double Xn,Xk,a,b,c,dX,F;
	
	cout << "Vedite  Xn,Xk,dX " << endl;
	cin >> Xn >> Xk >> dX;
	cout << "Vedite a,b,c: " << endl;
	cin	>> a >> b >> c;
	scanf("%lf%lf%lf%lf%lf%lf%lf", &Xn, &Xk, &dX, &a, &b, &c, &F);
	cout << " ------------------------------------ \n";
	cout << "|        X           |        F      |\n";
	cout << " ------------------------------------ \n";
	double x = Xn;
	while (x <= Xk)
	{
		if (c > 0 && a != 0) F = x / c;
		if (c < 0 && a == 0) F = x / c;
		if (c > 0 && a == 0) F = (a-x)/(c*x);
		if (c < 0 && a != 0) F = (-a) * Math::Pow(x,2);
		printf("|%9.2lf          |%9.2lf       |\n", x, (double)F);
		x=x+dX;

	}
	cout << " ------------------------------------ \n";
	system ("PAUSE");
	return 0;
}