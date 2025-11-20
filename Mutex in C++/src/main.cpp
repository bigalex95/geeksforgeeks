#include <iostream>
#include "not_mutex.hpp"
#include "mutex.hpp"

int main(int argc, char *argv[])
{

    std::cout << "***************************************" << std::endl;
    run_not_mutex();
    std::cout << "***************************************" << std::endl;
    run_mutex();
    std::cout << "***************************************" << std::endl;
    return 0;
}