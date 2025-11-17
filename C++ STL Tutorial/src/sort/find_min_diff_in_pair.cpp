#include "sort.hpp"
#include "utils.hpp"
#include <algorithm>
#include <limits.h>

std::pair<int, int> find_min_diff_in_pair(std::vector<int> &v)
{
    // Sort the vector
    std::sort(v.begin(), v.end());

    // Initialize variables to track the minimum difference and the pair
    int minDiff = INT_MAX;
    std::pair<int, int> res;

    // Traverse the vector to find the minimum difference
    for (auto i = 0; i < v.size() - 1; i++)
    {
        int diff = v[i + 1] - v[i];
        if (diff < minDiff)
        {
            minDiff = diff;
            res = {v[i], v[i + 1]};
        }
    }

    return res;
}

void run_find_min_diff_in_pair()
{
    std::cout << "Running: " << __func__ << std::endl;

    std::vector<int> v = {4, 2, 9, 7, 1, 5};

    // Find the pair with the minimum difference
    std::pair<int, int> res = find_min_diff_in_pair(v);

    std::cout << res.first << ", " << res.second << std::endl;
}