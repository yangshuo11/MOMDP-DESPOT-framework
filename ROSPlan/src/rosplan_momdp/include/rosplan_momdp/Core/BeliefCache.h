#ifndef BeliefCache_H
#define BeliefCache_H


#include "rosplan_momdp/Core/MObjectManager.h"
#include "rosplan_momdp/Core/Belief.h"
#include "rosplan_momdp/Core/UniqueBeliefHeap.h"
#include "rosplan_momdp/Core/BeliefCacheRow.h"

using namespace momdp;
namespace momdp 
{
	class BeliefCache
	{
	private: 
		std::vector<BeliefCacheRow *> belCache;
		UniqueBeliefHeap* lookupTable;

		void validateRowNumber(int row) ;

	public:
		BeliefCache(void);
		virtual ~BeliefCache(void);

		virtual void localDelete(SharedPointer<Belief> pointer);



		/**
		* @brief Helper Method to dump belief cache
		* @author Xan
		*/
		ofstream& writeBeliefVector(std::string fileName);
		ofstream& writeBeliefFunction(std::string fileName);



		int currentRowCount;
		BeliefCacheRow* getRow(int row);

		bool hasBelief( SharedPointer<belief_vector>& bel);

		int addBeliefRow( SharedPointer<belief_vector>& bel);
		int addBeliefRowWithoutCheck( SharedPointer<belief_vector>& bel);
		int getBeliefRowIndex( SharedPointer<belief_vector>& bel);

		int size()
		{
			return belCache.size();
		}


	};
}

#endif

