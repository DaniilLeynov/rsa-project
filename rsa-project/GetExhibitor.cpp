#include "GetExhibitor.h"
#include "GetSimpleNumber.h"
#define ll long long

	long long GetExhibitor::CreateExhibitor(ll fi)
	{
		ll fiEx = fi;
		long long exhibitor = GetPrimeryNumber();
		if (exhibitor < fi)
		{
			return exhibitor;
		}
		else CreateExhibitor(fiEx);
	}
	long long GetExhibitor::GetPrimeryNumber()
	{
		GetSimpleNumber simpleN;
		return simpleN.GetPrimaryNumber();
	}
