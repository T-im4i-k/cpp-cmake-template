#include "hello_lib/hello_lib.hpp"

#include <iostream>

auto main() -> int {
    std::cout << "Hello from main application!" << std::endl;
    (void)HelloLib::printHello(std::cout);
    return 0;
}
