#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
using namespace System;

int main(array<System::String ^> ^args)
{
    double z1, z2, x, y;
	cout << "Vedite znachenie X" << endl;
	cin >> x;
	cout << "Vedite znachenie Y" << endl;
	cin >> y;
	z1 = (pow(cos(x), 4)) + (pow(sin(y), 2))  + ((1/4) * (pow(sin(2 * x), 2) )) - 1;
	z2 = sin(y + x) * sin (y - x);
	cout << z1 << endl;
	cout << z2 << endl;
	system ("PAUSE");
    return 0;
}
