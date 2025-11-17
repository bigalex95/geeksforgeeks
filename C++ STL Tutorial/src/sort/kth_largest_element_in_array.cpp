#include "sort.hpp"
#include "utils.hpp"
#include <algorithm>

void kth_largest_element_in_array()
{
    std::cout << "Running: " << __func__ << std::endl;

    int arr[5] = {5, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    // Sort the array
    std::sort(arr, arr + n);

    // 3rd largest element will be present at 3 - 1 index
    std::cout << arr[k - 1] << std::endl;
}