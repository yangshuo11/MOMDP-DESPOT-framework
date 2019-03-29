#ifndef VariableCombined_H
#define VariableCombined_H


#include <vector>
#include <string>
#include "rosplan_momdp/Models/MOMDP/MOMDP.h"
#include "rosplan_momdp/Core/MObject.h"
#include "rosplan_momdp/Models/MOMDP/IVariableValue.h"
#include "rosplan_momdp/Models/MOMDP/VariableValue.h"
#include "rosplan_momdp/Models/MOMDP/IVariable.h"
#include "rosplan_momdp/Models/MOMDP/Variable.h"
using namespace std;
using namespace momdp;

namespace momdp
{
	// generic class for variable, holds user defined variable value
	class VariableCombined : public Variable
	{
	private:
		//string variableName;
		//vector<SharedPointer<VariableValue> > values;
		vector<SharedPointer<IVariable> > subVariables;

	public:
		VariableCombined(string name);
		virtual ~VariableCombined(void);


		void addSubVar(SharedPointer<IVariable> subVar);
		SharedPointer<IVariable> getSubVar(int index);
		void seal();



	};

}

#endif

