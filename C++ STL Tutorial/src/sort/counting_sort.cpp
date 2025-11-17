#include "sort.hpp"
#include "utils.hpp"
#include <algorithm>

void counting_sort(std::vector<int> &v)
{
    std::cout << "Running: " << __func__ << std::endl;

    int m = *max_element(v.begin(), v.end());
    std::vector<int> count(m + 1, 0);
    for (auto i : v)
    {
        count[i]++;
    }

    int index = 0;
    for (int i = 0; i <= m; i++)
    {
        while (count[i] > 0)
        {
            v[index++] = i;
            count[i]--;
        }
    }
}

void run_counting_sort()
{
    std::vector<int> v = {5, 3, 1, 4, 2};

    counting_sort(v);

    print_int_vector(v);
}