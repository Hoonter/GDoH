#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main()
{
	int kol;
	double sum, x, ts, st, kof, zn, dr;
    cout << "Vedite znachenie X" << endl;
	cin >> x;
	cout << "Vedite razmer r9da" << endl;
	cin >> kol;
	sum = Math::PI/2;
	ts = 1;
	st = 1/x;
	kof = -1;
	zn = 1;
	for (int i = 0; i < kol; i++)
	{
		st = st * x * x;
		kof = kof + 2;
		zn = zn * (-1);
		dr = zn * ts / (kof * st);
		sum = sum + dr; 
	}

    cout << "Sum = "<< sum << endl;
	system("pause");
    return 0;
	

}