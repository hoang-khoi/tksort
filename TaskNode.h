#ifndef TKSORT_TASKNODE_H
#define TKSORT_TASKNODE_H


#include <string>
#include <list>

class TaskNode {
    std::string name;
    std::list<TaskNode*> dependant;

public:
    explicit TaskNode(std::string name);
    void depends(TaskNode &other);
    const std::string &getName() const;
    const std::list<TaskNode *> &getDependant() const;
    friend std::ostream &operator<<(std::ostream& out, const TaskNode& taskNode);
};


#endif //TKSORT_TASKNODE_H
