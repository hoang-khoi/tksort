#include "TaskNode.h"
#include <ostream>
#include <utility>

TaskNode::TaskNode(std::string name) : name(std::move(name)) {}

void TaskNode::depends(TaskNode &other) {
    other.dependant.push_back(this);
}

std::ostream &operator<<(std::ostream &out, const TaskNode &taskNode) {
    out << "Task: " << taskNode.name << ". Dependants: " << taskNode.dependant.size();

    for (TaskNode *dependant : taskNode.dependant) {
        out << '\n' << dependant->getName();
    }

    return out;
}

const std::string &TaskNode::getName() const {
    return name;
}

const std::list<TaskNode *> &TaskNode::getDependant() const {
    return dependant;
}
