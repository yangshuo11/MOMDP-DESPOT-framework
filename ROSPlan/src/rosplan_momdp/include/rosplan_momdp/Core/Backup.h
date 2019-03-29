#ifndef Backup_H
#define Backup_H
#include "rosplan_momdp/Core/Const.h"
#include "rosplan_momdp/Core/MObject.h"

//using namespace momdp;
namespace momdp 
{
	class MObject;
	class BeliefTreeNode;
	class BeliefCache;

	template <typename T> class Bound;
	class PointBasedAlgorithm;

	template <typename T>
	class Backup
	{
		
	public:
		Backup(void)
		{
		}

		virtual ~Backup(void)
		{
		}


		virtual SharedPointer<T> backup(BeliefTreeNode * node) = 0;
		
	};

}

#endif
