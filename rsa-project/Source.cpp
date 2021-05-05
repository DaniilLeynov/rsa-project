/*
 * C++ Program to Implement Miller Rabin Primality Test
 */
#include <iostream>
#include "GetSimpleNumber.h"
#include "Mod.h"
#include "EulerFunction.h"
using namespace std;


int main()
{
	GetSimpleNumber SimpleNumber;
	int p = SimpleNumber.GetPrimaryNumber();
	int q = SimpleNumber.GetPrimaryNumber();
	Mod modul;
	int mod = modul.CreateMod(p, q);
	EulerFunction fi;
	int eFun = fi.GetFi(p, q);
}