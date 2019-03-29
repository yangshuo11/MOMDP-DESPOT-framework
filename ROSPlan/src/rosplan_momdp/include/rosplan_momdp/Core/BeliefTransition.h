#ifndef BeliefTransition_H
#define BeliefTransition_H

#include "rosplan_momdp/Core/Observations.h"
#include "rosplan_momdp/Core/Actions.h"
#include "rosplan_momdp/Core/States.h"
#include "rosplan_momdp/Core/MObject.h"
#include "rosplan_momdp/Core/BeliefWithState.h"
#include "rosplan_momdp/MathLib/SparseVector.h"

using namespace momdp;
namespace momdp 
{
	class BeliefTransition
	{
	public:
		BeliefTransition(void)
		{
		}
		virtual ~BeliefTransition(void) 
		{
		}
		SharedPointer<MObject> problem;
		virtual SharedPointer<BeliefWithState> nextBelief(SharedPointer<BeliefWithState> bp, int a, int o, int obsX ) = 0;

		// TODO: somehow eliminate jspv?
		virtual SharedPointer<BeliefWithState> nextBelief2(SharedPointer<BeliefWithState> bp, int a, int o, int obsX, SharedPointer<SparseVector>& jspv ) = 0;

		virtual SharedPointer<BeliefWithState> nextBelief(SharedPointer<belief_vector>& belY, DenseVector& belX, int a, int o, int obsX)=0; // SYL07292010 

	};
}


#endif

