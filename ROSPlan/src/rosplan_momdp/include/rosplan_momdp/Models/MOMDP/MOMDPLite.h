#ifndef MOMDPLite_H
#define MOMDPLite_H

#include <string>

#include "rosplan_momdp/Models/MOMDP/MOMDP.h"
#include "rosplan_momdp/Models/MOMDP/StateTransitionY.h"
using namespace std;
using namespace momdp;
namespace momdp 
{
class MOMDPLite : public MOMDP
{
public:
	MOMDPLite(void);
	virtual ~MOMDPLite(void);

	StateTransitionY* YTrans;

	static MOMDPLite* LoadProbem(string problemName)
	{
		return NULL;
	}
};
}
#endif
