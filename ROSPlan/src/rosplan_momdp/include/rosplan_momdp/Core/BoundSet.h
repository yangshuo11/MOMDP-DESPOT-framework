#ifndef BoundSet_H
#define BoundSet_H

#include <vector>
using namespace std;
#include "rosplan_momdp/Core/Bound.h"
#include "rosplan_momdp/Core/BeliefWithState.h"
#include "rosplan_momdp/Core/BeliefTreeNode.h"
#include "rosplan_momdp/Core/FacmodelStructs.h"
using namespace momdp;
namespace momdp 
{
	template <typename T> 
	class BoundSet
	{
	private:

	public:
		BoundSet(void)
		{
		}
		virtual ~BoundSet(void)
		{
		}

		vector<Bound<T> *> set;
		virtual REAL_VALUE getValue(SharedPointer<Belief> belief) = 0;
		virtual void backup(BeliefTreeNode* node) = 0;
	};
}

#endif

