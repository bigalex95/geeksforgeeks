#include <iostream>
#include "queue.hpp"

int main(int argc, char *argv[])
{
    std::cout << "***************************************" << std::endl;
    run_queue();
    std::cout << "***************************************" << std::endl;
    run_insert2queue();
    std::cout << "***************************************" << std::endl;
    run_access2queue();
    std::cout << "***************************************" << std::endl;
    delete_from_queue();
    std::cout << "***************************************" << std::endl;
    check_empty_queue();
    std::cout << "***************************************" << std::endl;
    size_of_queue();
    std::cout << "***************************************" << std::endl;

    return 0;
}