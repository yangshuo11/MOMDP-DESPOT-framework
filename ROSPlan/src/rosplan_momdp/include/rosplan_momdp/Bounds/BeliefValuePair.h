#ifndef BeliefValuePair_H
#define BeliefValuePair_H

#include "rosplan_momdp/Core/MObject.h"
#include "rosplan_momdp/MathLib/MathLib.h"
using namespace momdp;
namespace momdp 
{
	class BeliefValuePair :	public MObject
	{
	public:
		BeliefValuePair(void);
		virtual ~BeliefValuePair(void);
	
	public:
		SharedPointer<belief_vector>  b;
		double v;
		double innver_cornerPoints; // cached value, used by BeliefValuePair->getValue
		bool disabled;

		unsigned int version; // avoid recalculating the upper bound value, used by BeliefValuePair->getValue

	};
}
#endif

