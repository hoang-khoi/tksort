#include <unordered_set>
#include <stack>
#include "TopologicalSorter.h"

static void dfs(
                const TaskNode *root,
                std::unordered_set<const TaskNode*> &visited,
                std::stack<const TaskNode*> &taskStack
) {
    if (visited.count(root))
        return;

    visited.insert(root);

    for (TaskNode *dependant : root->getDependant())
        dfs(dependant, visited, taskStack);

    taskStack.push(root);
}

std::vector<TaskNode> TopologicalSorter::sort(const std::vector<TaskNode> &taskNodes) {
    std::unordered_set<const TaskNode*> visited;
    std::stack<const TaskNode*> taskStack;
    std::vector<TaskNode> result;

    for (auto &taskNode : taskNodes)
        dfs(&taskNode, visited, taskStack);

    while (!taskStack.empty()) {
        result.push_back(*taskStack.top());
        taskStack.pop();
    }

    return result;
}
