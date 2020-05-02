#include "TaskExporter.h"

void TaskExporter::exportTasks(const std::vector<TaskNode> &taskNodes, std::ostream &out) {
    for (const auto &taskNode : taskNodes)
        out << taskNode.getName() << "\n";
}
