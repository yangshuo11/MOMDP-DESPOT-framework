#ifndef BeliefCacheSet_H
#define BeliefCacheSet_H

#include "rosplan_momdp/Core/Const.h"
#include "rosplan_momdp/Core/BeliefWithState.h"
#include "rosplan_momdp/Core/BeliefCacheRow.h"

using namespace momdp;
class BeliefCacheSet
{
public:
	BeliefCacheSet(void);
	virtual ~BeliefCacheSet(void);

	int currentRowCount;
	
	BeliefCacheRow* getRow(cacherow_stval)
	{
	}

	bool hasBelief( BeliefWithState& bel)
	{
	}

	cacherow_stval addBeliefRow( BeliefWithState& bel)
	{
	}
	cacherow_stval addBeliefRowWithoutCheck( BeliefWithState& bel)
	{
	}
	cacherow_stval getBeliefRowIndex( BeliefWithState& bel)
	{
	}

	int size()
	{
		return 0;
	}
};

#endif
