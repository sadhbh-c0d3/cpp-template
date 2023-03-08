#include <iostream>
#include <boost/lexical_cast.hpp>

#include "lib.hpp"


int main(int argc, const char** argv)
{
    using Hello = hello_world::Hello;

    if (argc != 4)
    {
        std::cerr << "Expected three arguments." << std::endl
            << "Usage: run_app a b c" << std::endl;

        return -1;
    }

    auto a = boost::lexical_cast<int>(argv[1]);
    auto b = boost::lexical_cast<int>(argv[2]);
    auto c = boost::lexical_cast<int>(argv[3]);

    Hello hello;
    auto x = hello.foo(a, b, c);

    std::cout << "a=" << a << ", b="<< b << ", c=" << c
        << " ==> " << x << std::endl;

    return 0;
}