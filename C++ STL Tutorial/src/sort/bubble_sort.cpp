#include "sort.hpp"
#include "utils.hpp"
#include <utility>

void bubble_sort(std::vector<int> &v)
{
    std::cout << "Running: " << __func__ << std::endl;

    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {

                std::swap(v[j], v[j + 1]);
            }
        }
    }
}

void run_bubble_sort()
{
    std::vector<int> v = {5, 3, 1, 4, 2};

    bubble_sort(v);

    print_int_vector(v);
}
