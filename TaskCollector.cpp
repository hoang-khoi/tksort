#include <iostream>
#include "TaskCollector.h"

std::vector<TaskNode> TaskCollector::collect(std::istream &in) {
    std::vector<TaskNode> taskNodes;
    std::string buf;

    while (std::getline(in, buf)) {
        if (buf.empty())
            continue;

        taskNodes.emplace_back(buf);
    }

    return taskNodes;
}
