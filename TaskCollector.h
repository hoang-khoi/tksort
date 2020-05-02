#ifndef TKSORT_TASKCOLLECTOR_H
#define TKSORT_TASKCOLLECTOR_H


#include <vector>
#include "TaskNode.h"

class TaskCollector {
public:
    static std::vector<TaskNode> collect(std::istream& in);
};


#endif //TKSORT_TASKCOLLECTOR_H
