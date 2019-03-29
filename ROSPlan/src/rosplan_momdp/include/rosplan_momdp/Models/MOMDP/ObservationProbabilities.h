#ifndef ObservationProbabilities_H
#define ObservationProbabilities_H

#include "rosplan_momdp/Core/Const.h"
#include "rosplan_momdp/Core/Observations.h"
#include "rosplan_momdp/Core/Actions.h"
#include "rosplan_momdp/Core/States.h"
#include "rosplan_momdp/MathLib/MathLib.h"
#include "rosplan_momdp/Models/MOMDP/VariableRelation.h"

using namespace std;
using namespace momdp;
namespace momdp 
{
	class MOMDP;
	class ObservationProbabilities : public MObject
	{
		friend class MOMDP;
	private:
		vector<vector<SharedPointer<SparseMatrix> > > matrix;
		vector<vector<SharedPointer<SparseMatrix> > > matrixTr;

	public:
		ObservationProbabilities(void);
		virtual ~ObservationProbabilities(void);

		REAL_VALUE prob(Observations::iterator& o, States::iterator& x, States::iterator& y, Actions::iterator& a);


		virtual SharedPointer<SparseMatrix> getMatrix(int a, int x);
		virtual SharedPointer<SparseMatrix> getMatrixTr(int a, int x);
		
	};
}

#endif




