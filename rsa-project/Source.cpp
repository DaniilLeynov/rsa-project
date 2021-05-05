/*
 * C++ Program to Implement Miller Rabin Primality Test
 */
#include <iostream>
#include "GetSimpleNumber.h"
#include "Mod.h"
using namespace std;


int main()
{
	GetSimpleNumber SimpleNumber;
	int p = SimpleNumber.GetPrimaryNumber();
	int q = SimpleNumber.GetPrimaryNumber();
	Mod modul;
	int mod = modul.CreateMod(p, q);
}