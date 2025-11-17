#include "utils.hpp"

void print_int_vector(std::vector<int> v)
{
    for (auto i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
