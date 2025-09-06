#include <iostream>

#include "hello_lib/hello_lib.hpp"

namespace HelloLib {
    auto printHello(std::ostream &os) -> std::ostream & {
        return os << "Hello from lib!" << std::endl;
    }
} // namespace HelloLib
