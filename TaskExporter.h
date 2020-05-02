#ifndef TKSORT_TASKEXPORTER_H
#define TKSORT_TASKEXPORTER_H


#include <vector>
#include <ostream>
#include "TaskNode.h"

class TaskExporter {
public:
    static void exportTasks(const std::vector<TaskNode> &taskNodes, std::ostream &out);
};


#endif //TKSORT_TASKEXPORTER_H
