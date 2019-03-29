#ifndef StateTransitionXXpY_H
#define StateTransitionXXpY_H

#include "rosplan_momdp/Core/Const.h"
#include "rosplan_momdp/Core/Observations.h"
#include "rosplan_momdp/Core/Actions.h"
#include "rosplan_momdp/Core/States.h"
#include "rosplan_momdp/MathLib/MathLib.h"
#include "rosplan_momdp/Models/MOMDP/VariableRelation.h"
#include "rosplan_momdp/Models/MOMDP/StateTransitionY.h"

using namespace std;
using namespace momdp;
namespace momdp 
{
	class MOMDP;
	class StateTransitionXXpY : public StateTransitionY
	{
		friend class MOMDP;		
	private:
		typedef vector<vector<vector<SharedPointer<SparseMatrix> > > > Matrices;
		Matrices matrix;
		Matrices matrixTr;

	public:
		StateTransitionXXpY(void);
		virtual ~StateTransitionXXpY(void);

		virtual SharedPointer<SparseMatrix> getMatrix(int a, int x, int xp);
		virtual SharedPointer<SparseMatrix> getMatrixTr(int a, int x, int xp);
	};
}

#endif

