#include "sort.hpp"
#include "utils.hpp"
#include <algorithm>

void remove_duplicates_in_vector()
{
    std::cout << "Running: " << __func__ << std::endl;

    std::vector<int> v = {1, 3, 1, 1, 2, 3, 2, 4, 5};

    // Sort the vector to bring duplicate elements adjacent
    std::sort(v.begin(), v.end());

    // Use unique() to bring all the duplicates to end
    auto it = std::unique(v.begin(), v.end());

    // Remove the duplicates
    v.erase(it, v.end());

    print_int_vector(v);
}