#pragma once
#include <iostream>
#include <string>

void run_move()
{
    std::string original = "Hello, World!";

    // Copying the string
    std::string copy = original;

    // Moving the string
    std::string moved = std::move(original);

    // Output all three
    std::cout << "Original: '" << original << "'" << std::endl;
    std::cout << "Copy:     '" << copy << "'" << std::endl;
    std::cout << "Moved:    '" << moved << "'" << std::endl;

    return;
}