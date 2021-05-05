#include <iostream>
#include <cstring>
#include <cstdlib>
#pragma once
#define ll long long


using namespace std;
class GetSimpleNumber
{
public:
	int GetPrimaryNumber();
private:
	ll mulmod(ll a, ll b, ll mod);
	ll modulo(ll base, ll exponent, ll mod);
	bool Miller(ll p, int iteration);
	int GenerateNumber();
	int GetNumber();
	
};

