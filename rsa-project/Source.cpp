/*
 * C++ Program to Implement Miller Rabin Primality Test
 */
#include <iostream>
#include "PublicKey.h"
#define ll long long
using namespace std;


int main()
{
	PublicKey a;
	a.GetPublicKey();
	for (ll i = 0; i < 2; i++)
	{
		ll m = a.GetPublicKey()[i];
		cout << m << "\n";
	} 
}