#include <iostream>
#include "PriorityAssignor.h"

static int calMaxQuestions(int n) {
    return n * (n - 1) / 2;
}

void PriorityAssignor::assign(std::vector<TaskNode> &taskNodes) {
    size_t size = taskNodes.size();
    std::string ans;
    int totalQuestions = calMaxQuestions(size);
    int count = 1;

    for (int i = 0; i < size; ++i) {    // Loop task 1
        for (int j = i + 1; j < size; ++j) { // Loop task 2
            std::cout << '(' << count++ << "/" << totalQuestions << ')' << "\n"
                      << "--------------------------------------------------------------------------------\n"
                      << "1: " << taskNodes[i].getName() << "\n"
                      << "2: " << taskNodes[j].getName() << "\n"
                      << "Which one to be done first?: ";
            std::cin >> ans;

            if (ans == "1") // Task 2 depends on Task 1
                taskNodes[j].depends(taskNodes[i]);
            else if (ans == "2")
                taskNodes[i].depends(taskNodes[j]);
            else
                std::cout << "No order specified\n";

            std::cout << "\n";
        }
    }
}
