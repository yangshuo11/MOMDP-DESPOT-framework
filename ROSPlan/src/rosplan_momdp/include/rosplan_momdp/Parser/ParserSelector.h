#ifndef ParserSelector_H
#define ParserSelector_H
#include <fstream>
#include "rosplan_momdp/Models/MOMDP/MOMDP.h"
#include "rosplan_momdp/Parser/POMDPX/FactoredPomdp.h"
#include "rosplan_momdp/OfflineSolver/solverUtils.h"

using namespace momdp;
using namespace std;
namespace momdp 
{

	class ParserSelector
	{
	public:
		ParserSelector(void);
		~ParserSelector(void);
		static SharedPointer<MOMDP> loadProblem(string problemName, SolverParams& solverParam);
	};
}
#endif

