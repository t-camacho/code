#include "util.h"

void usage(version v, const char *name) {
    std::cout << "Usage: ./build/apps/" << name << " [OPTIONS]...\n\n";
    std::cout << "Options:\n";
    std::cout << "\t -i The input to use to run the benchmarks. Default: 'test'.\n";
    if(v != SEQUENTIAL) {
        std::cout << "\t -n The minimum number of threads to use. Default: '1'.\n";
    }
    std::cout << "\t -h Displays this help message.\n";
}

void fatal(const char *str) {
    if(str != nullptr) {
        std::cout << "fatal: " << str << std::endl;
    }
    exit(1);
}