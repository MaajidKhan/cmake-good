#include "hello.hpp"

#include <iostream>

void hello::say_hello()
{
    std::cout << "hello world from 2_make_a_library project" << std::endl;
    std::cout << "The say-hello library is version " << SAY_HELLO_VERSION << "\n";
}