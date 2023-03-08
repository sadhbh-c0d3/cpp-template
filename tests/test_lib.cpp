#include <iostream>
#include <cassert>

#include "lib.hpp"


int main(int argc, const char** argv)
{
    using Hello = hello_world::Hello;

    Hello hello;
    auto x = hello.foo(1, 2, 3);
    auto y = hello.bar(1, 2, 3);
    auto z = hello.baz(1, 2, 3);

    assert(x == 10);
    assert(x == y);
    assert(x == z);

    std::cout << "Tests OK." << std::endl;
    return 0;
}
