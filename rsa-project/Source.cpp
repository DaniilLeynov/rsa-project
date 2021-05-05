/*
 * C++ Program to Implement Miller Rabin Primality Test
 */
#include <iostream>
#include "GetSimpleNumber.h"
#include "Mod.h"
#include "EulerFunction.h"
#include "GetExhibitor.h"
#define ll long long
using namespace std;


int main()
{
	GetSimpleNumber SimpleNumber;
	ll p = SimpleNumber.GetPrimaryNumber();
	ll q = SimpleNumber.GetPrimaryNumber();
	Mod modul;
	ll mod = modul.CreateMod(p, q);
	EulerFunction fi;
	ll eFun = fi.GetFi(p, q); // EulerFunction
	GetExhibitor ex;
	ll exhibitor = ex.CreateExhibitor(eFun); 
}