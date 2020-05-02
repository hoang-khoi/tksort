#include <iostream>
#include <fstream>
#include "TaskCollector.h"
#include "PriorityAssignor.h"
#include "TopologicalSorter.h"
#include "TaskExporter.h"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Usage:\n"
                  << argv[0] << " <text_file>\n";
        return 1;
    }

    std::ifstream taskInFile;
    std::ofstream taskOutFile;

    taskInFile.open(argv[1]);

    if (!taskInFile.is_open()) {
        std::cerr << "File not found\n";
        return 1;
    }

    std::vector<TaskNode> tasks = TaskCollector::collect(taskInFile);
    taskInFile.close();

    PriorityAssignor::assign(tasks, std::cin, std::cout);
    tasks = TopologicalSorter::sort(tasks);

    taskOutFile.open(argv[1]);
    TaskExporter::exportTasks(tasks, taskOutFile);
    taskOutFile.close();
}
