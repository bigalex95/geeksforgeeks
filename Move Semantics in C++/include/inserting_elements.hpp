#pragma once
#include <iostream>
#include <string>
#include <vector>

void run_inserting_elements()
{
    std::vector<std::string> names;

    std::string temp = "Alice";

    // Moves temp into vector
    names.push_back(std::move(temp));

    std::cout << names.size() << std::endl;
    std::cout << names[0] << std::endl;

    // Constructs "Bob" directly in vector
    names.emplace_back("Bob");

    std::cout << names.size() << std::endl;
    std::cout << names[0] << std::endl;
    std::cout << names[1] << std::endl;

    return;
}