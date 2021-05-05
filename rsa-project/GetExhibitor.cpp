#include "GetExhibitor.h"
#include "GetSimpleNumber.h"
#define ll long long
class GetExhibitor
{
	long long CreateExhibitor(ll fi)
	{
		ll fiEx = fi;
		long long exhibitor = GetPrimeryNumber();
		if (exhibitor < fiEx)
		{
			return exhibitor;
		}
		else CreateExhibitor(fiEx);
	}
	long long GetPrimeryNumber()
	{
		GetSimpleNumber simpleN;
		return simpleN.GetPrimaryNumber();
	}
};