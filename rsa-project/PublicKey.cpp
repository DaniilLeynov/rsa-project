#include "PublicKey.h"
#include <iostream>
#include "GetSimpleNumber.h"
#include "Mod.h"
#include "EulerFunction.h"
#include "GetExhibitor.h"
#define ll long long



	ll * PublicKey::GetPublicKey()
	{
		GetSimpleNumber SimpleNumber;
		ll p = SimpleNumber.GetPrimaryNumber();
		ll q = SimpleNumber.GetPrimaryNumber();
		Mod modul;
		ll modular = modul.CreateMod(p, q);
		EulerFunction fi;
		ll eFun = fi.GetFi(p, q); // EulerFunction
		GetExhibitor ex;
		ll exhibitor = ex.CreateExhibitor(eFun);
		ll publicKey[] = {exhibitor, modular};

		return publicKey;
		
	}
	


