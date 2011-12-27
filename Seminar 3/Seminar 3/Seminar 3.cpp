#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main()
{
	int kol;
	cout << "Vedite kolichestvo elementov: ";
	cin >> kol;
	int *mass = new int[kol];
	cout << " **************************** " << endl;
	cout << "  *** Vedite "<< kol << " znacheni' ***" << endl;
	cout << " **************************** " << endl;
	for (int i = 0; i < kol; i++) 
	{
		cout << "Vedite znachenie: ";
		cin >> mass[i];
	}
	cout << " " << endl;
	cout << "*********************** " << endl;
	cout << "*** Isxodni' massiv ***" << endl;
	cout << "*********************** " << endl;
	cout << " " << endl;
	cout << "**************************** " << endl;
	for (int i = 0; i < kol; i++)
	cout <<" |" << mass[i] << "| ";
	cout << " " << endl;
	cout << "**************************** " << endl;
	cout << " " << endl;
	int max, min;
	// ¹1
	for (int i = max = min = 0; i < kol; i++)
	{
		if(mass[i] < mass[min]) min = i;
	}
	cout << "*** Nomer min elementa raven: *** "<< min << " ***" << endl;
	cout << " " << endl;
	//¹2
	int pms, vms, summ, pmsz, vmsz; 
	summ = 0;
	for (int i = 0; i <= kol; i++)
	{
		if (mass[i] < 0) 
		{
			pms = i; 
			pmsz = mass[i]; break;
		}
	}
	mass[pms] = 0;

	for (int i = 0; i <= kol; i++)
	{
		if (mass[i] < 0) 
		{
			vms = i; 
			vmsz = mass[i]; break;
		}
	}
	cout << "*** "<< pms << "("<< pmsz <<")" <<" | "<< vms << "("<< vmsz <<")" << " ***" << endl;	
	cout << " " << endl;

	for (int i = pms +1; i < vms; i++)
	{
		summ +=mass[i];
	}
	mass[pms] = pmsz;
	cout << "***Summa chisel: *** "<< summ << " ***" << endl;

	//¹3
	
	for (int i = 0; i < kol-1; i++)
	{
		int imin = i; 
		for (int j = i + 1; j < kol; j++)
			if (mass[j] < mass[imin]) imin =j;
		int a = mass[i];
		mass[i] = mass[imin];
		mass[imin] =a;
	}
	cout << " " << endl;
	cout << "*********************** " << endl;
	cout << "*** Proverka massiva ***" << endl;
	cout << "*********************** " << endl;
	cout << " " << endl;
	cout << "**************************** " << endl;
	for (int i = 0; i < kol; i++)
	cout <<" |" << mass[i] << "| ";
	cout << " " << endl;
	cout << "**************************** " << endl;
	cout << " " << endl;
	system("pause");
    return 0;
}