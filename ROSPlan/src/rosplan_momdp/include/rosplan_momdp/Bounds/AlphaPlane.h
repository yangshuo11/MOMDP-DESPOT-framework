#ifndef AlphaPlane_H
#define AlphaPlane_H

#include "rosplan_momdp/Core/MObject.h"
#include "rosplan_momdp/Core/Tuple.h"
#include "rosplan_momdp/Core/FacmodelStructs.h"
#include "rosplan_momdp/Core/BeliefTreeNode.h"
#include "rosplan_momdp/Parser/POMDPX/tinyxml.h"

using namespace momdp;
namespace momdp 
{
class AlphaPlane :	public MObject
{
public:
		//constructor
		AlphaPlane();
		

		//AlphaPlane(const alpha_vector& _alpha, int _action, state_val _sval);

		//AlphaPlane(const alpha_vector& _alpha, int _action, state_val _sval, int _timeStamp);

		//methods
		void copyFrom(SharedPointer<alpha_vector> _alpha, int _action, state_val _sval);

	virtual ~AlphaPlane(void);

		
		SharedPointer<alpha_vector> alpha;
		int action;
		state_val sval;
	
		Tuple* solverData;
		int timeStamp;
		int used; //for recording its usage in corner point dominations
	

		void setTimeStamp(int _timeStamp);

		void init(int _timeStamp, BeliefTreeNode* _birthBelief);

		void addDominatedBelief(int _timeStamp, BeliefTreeNode* _belief);

		bool certDuplicated(BeliefTreeNode* n);

		SharedPointer<AlphaPlane> duplicate();
		void write(std::ofstream& out) const;	//write XML dense vector
		void writeSparse(std::ofstream& out) const; //write XML sparse vector 
		//void write(std::ostream& out) const;	//write plane in old IV format


};
}

#endif
