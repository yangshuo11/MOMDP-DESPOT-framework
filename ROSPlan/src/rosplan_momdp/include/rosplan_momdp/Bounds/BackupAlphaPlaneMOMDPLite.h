#ifndef BackupAlphaPlaneMOMDPLite_H
#define BackupAlphaPlaneMOMDPLite_H

#include "rosplan_momdp/Core/Backup.h"
#include "rosplan_momdp/Bounds/AlphaPlane.h"
using namespace momdp;
namespace momdp 
{
class BackupAlphaPlaneMOMDPLite : public Backup<AlphaPlane>
{
public:
	BackupAlphaPlaneMOMDPLite(void);
	virtual ~BackupAlphaPlaneMOMDPLite(void);

	virtual SharedPointer<AlphaPlane> backup(BeliefTreeNode * node);
};
}
#endif

