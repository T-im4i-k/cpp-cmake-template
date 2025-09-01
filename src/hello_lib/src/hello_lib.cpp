#include <iostream>

#include "hello_lib/hello_lib.hpp"

namespace HelloLib {
    std::ostream &printHello(std::ostream &os) {
        return os << "Hello from lib!" << std::endl;
    }
} // namespace HelloLib
