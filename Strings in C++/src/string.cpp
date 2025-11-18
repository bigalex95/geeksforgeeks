#include "string.hpp"

void run_string()
{
    // Creating a string
    std::string str = "Hello Geeks";

    // Traversing using index
    std::cout << "Using index: ";
    for (int i = 0; i < str.size(); i++)
    {
        std::cout << str[i];
    }
    std::cout << std::endl;

    // Traversing using range-based for loop
    std::cout << "Using range-based for loop: ";
    for (char ch : str)
    {
        std::cout << ch;
    }
    std::cout << std::endl;

    // Traversing using iterator
    std::cout << "Using iterator: ";
    for (auto it = str.begin(); it != str.end(); it++)
    {
        std::cout << *it;
    }
    std::cout << std::endl;

    return;
}