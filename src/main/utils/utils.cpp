#include "utils/utils.hpp"

#include <iostream>
#include <string>

void CustomPrint(const std::string& message, bool useColors) {
    if (useColors) {
        // Print with colors
        std::cout << "\033[1;31m" << message << "\033[0m" << std::endl;
    } else {
        // Print without colors
        std::cout << message << std::endl;
    }
}