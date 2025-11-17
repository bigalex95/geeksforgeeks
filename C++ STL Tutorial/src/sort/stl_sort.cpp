#include "sort.hpp"
#include "utils.hpp"
#include <algorithm>

void stl_sort()
{
    std::cout << "Running: " << __func__ << std::endl;

    std::vector<int> v = {5, 3, 1, 4, 2};

    // Default ascending order
    std::sort(v.begin(), v.end());

    print_int_vector(v);
}