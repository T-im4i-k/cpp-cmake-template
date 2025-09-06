#include "hello_lib/hello_lib.hpp"

#include <iostream>

namespace HelloLib {
    auto printHello(std::ostream &os) -> std::ostream & {
        return os << "Hello from lib!" << std::endl;
    }
} // namespace HelloLib
