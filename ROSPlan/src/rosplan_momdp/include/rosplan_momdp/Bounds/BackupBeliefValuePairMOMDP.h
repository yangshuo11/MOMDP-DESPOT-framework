#ifndef BackupBeliefValuePairMOMDP_H
#define BackupBeliefValuePairMOMDP_H

#include "rosplan_momdp/Core/Backup.h"
#include "rosplan_momdp/Bounds/BeliefValuePair.h"
#include "rosplan_momdp/Bounds/BeliefValuePairPool.h"
#include "rosplan_momdp/Bounds/BeliefValuePairPoolSet.h"
#include "rosplan_momdp/Core/IndexedTuple.h"
using namespace momdp;
namespace momdp 
{
	class BeliefValuePairPool;
	class MOMDP;

	class BackupBeliefValuePairMOMDP : public Backup<BeliefValuePair>
	{
	public:
		//REMOVE:: IndexedTuple<BeliefValuePairPoolDataTuple> *dataTable;, use individual BeliefValuePairPools's datatable
		SharedPointer<MOMDP> problem;
		BeliefValuePairPoolSet *boundSet;
		


		BackupBeliefValuePairMOMDP(void);
		virtual ~BackupBeliefValuePairMOMDP(void);

		void setProblem(SharedPointer<MOMDP> p)
		{
			problem = p;
		}
		void setSolver(PointBasedAlgorithm *p)
		{
			//solver = p;
		}
		void setBound(PointBasedAlgorithm *p)
		{

		}

		virtual SharedPointer<BeliefValuePair> backup(BeliefTreeNode * node);
		virtual	double getNewUBValueQ(BeliefTreeNode& cn, int a);
		virtual double getNewUBValueSimple(BeliefTreeNode& cn, int* maxUBActionP);
		virtual double getNewUBValueUseCache(BeliefTreeNode& cn, int* maxUBActionP);
		virtual double getNewUBValue(BeliefTreeNode& cn, int* maxUBActionP);

	};
}


#endif

