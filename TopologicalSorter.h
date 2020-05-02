#ifndef TKSORT_TOPOLOGICALSORTER_H
#define TKSORT_TOPOLOGICALSORTER_H


#include <vector>
#include "TaskNode.h"

class TopologicalSorter {
public:
    static std::vector<TaskNode> sort(const std::vector<TaskNode> &taskNodes);
};


#endif //TKSORT_TOPOLOGICALSORTER_H
