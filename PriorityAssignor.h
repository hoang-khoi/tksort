#ifndef TKSORT_PRIORITYASSIGNOR_H
#define TKSORT_PRIORITYASSIGNOR_H


#include <vector>
#include "TaskNode.h"

class PriorityAssignor {
public:
    static void assign(std::vector<TaskNode> &taskNodes, std::istream &in, std::ostream &out);
};


#endif //TKSORT_PRIORITYASSIGNOR_H
