#ifndef VariableContainer_H
#define VariableContainer_H

#include <string>
#include <map>
#include "SymbolSet.h"
#include "rosplan_momdp/Core/MObject.h"
#include "rosplan_momdp/Models/MOMDP/IVariableValue.h"
#include "rosplan_momdp/Models/MOMDP/IVariable.h"
#include "rosplan_momdp/MathLib/MathLib.h"


using namespace std;
using namespace momdp;

namespace momdp 
{

	template <typename T> class SymbolSetIterator;

	class ValueSet
	{
	public:
		ValueSet()
		{
			
		}
		map<string, SharedPointer<IVariableValue> > vals;
		string name;
	};

	class VariableContainer : public SymbolSet<ValueSet>
	{
	private:

	public:
		typedef SymbolSetIterator<ValueSet> iterator;

		VariableContainer(void);
		virtual ~VariableContainer(void);
		
		
		vector<SharedPointer<IVariable> > vars;
		virtual void sealAndPopulate();

		virtual int indexOf(map<string, SharedPointer<IVariableValue> >& input);
		virtual SharedPointer<SparseVector> getInitialProb();
		// Capacity
		// int size() inherited...

	};
}


#endif

