#include <iostream>
using namespace std;
#include <say-hello/hello.hpp> // we are able to add this path as header as in the current CMakelist file
// we have inherited the include_dir of the say-hello library

int main()
{
    hello::say_hello();
    std::cout << "The say-hello library is version " << SAY_HELLO_VERSION << "\n";
    return 0;
}
