#ifndef StatsCollector_H
#define StatsCollector_H

#include "rosplan_momdp/Core/Const.h"

//using namespace momdp;
namespace momdp 
{
class StatsCollector
{
public:
	StatsCollector(void);
	~StatsCollector(void);


	static long memoryUsage;
	
};
}


#endif

