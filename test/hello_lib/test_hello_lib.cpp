#include <cassert>
#include <sstream>
#include <string>

#include "hello_lib/hello_lib.hpp"

auto main() -> int {
    // Test printHello() function
    {
        std::ostringstream os;
        (void) HelloLib::printHello(os);
        assert(os.str() == "Hello from lib!\n");
    }

    // Test that always fails
    // Uncomment to fail testing!
    {
        // assert(false);
    }

    return 0;
}
