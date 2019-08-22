#include <testlib.hpp>
#include <iostream>

#if !defined(TESTLIB_APPLE)
void chdir_to_bundle_parent() {
    std::cout << "I am not an apple\n";
}
#endif// TESTLIB_APPLE (apple imple in darwin.mm)
