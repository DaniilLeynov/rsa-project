#pragma once
#include <iostream>
#include "GetSimpleNumber.h"
#include "Mod.h"
#include "EulerFunction.h"
#include "GetExhibitor.h"
#define ll long long

class PublicKey
{
public:
	PublicKey();
	ll e;
	ll mod;
private:
	void GetPublicKey();
	
};

