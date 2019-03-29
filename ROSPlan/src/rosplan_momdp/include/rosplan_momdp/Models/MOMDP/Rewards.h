#ifndef Rewards_H
#define Rewards_H

#include "rosplan_momdp/Core/Const.h"
#include "rosplan_momdp/Core/Observations.h"
#include "rosplan_momdp/Core/Actions.h"
#include "rosplan_momdp/Core/States.h"
#include "rosplan_momdp/MathLib/MathLib.h"
#include "rosplan_momdp/Core/BeliefWithState.h"
#include "rosplan_momdp/Models/MOMDP/IVariable.h"
#include "rosplan_momdp/Models/MOMDP/VariableRelation.h"

using namespace std;
using namespace momdp;
namespace momdp 
{
	class MOMDP;
	class Rewards : public MObject
	{
		friend class MOMDP;
	private:
		vector<SharedPointer<SparseMatrix> > matrix;


	public:
		Rewards(void);
		virtual ~Rewards(void);

		vector<SharedPointer<IVariable> > vars;

		virtual REAL_VALUE getReward(BeliefWithState& belief, int a);
		REAL_VALUE reward(States::iterator& x, States::iterator& y, Actions::iterator& a);
		
		virtual SharedPointer<SparseMatrix> getMatrix(int x);
		//virtual SharedPointer<SparseMatrix> getMatrixTr(int x);

	};
}
#endif


