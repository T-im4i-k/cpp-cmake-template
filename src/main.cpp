#include <iostream>

#include "hello_lib/hello_lib.hpp"

auto main() -> int {
    std::cout << "Hello from main application!" << std::endl;
    (void) HelloLib::printHello(std::cout);
    return 0;
}
