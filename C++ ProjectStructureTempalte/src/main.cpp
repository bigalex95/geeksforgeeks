#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "***************************************" << std::endl;

    std::cout << "Hello, World!" << std::endl;
    std::cout << "***************************************" << std::endl;

    // Print all command-line arguments
    std::cout << "Number of arguments: " << argc << std::endl;
    for (int i = 0; i < argc; ++i)
    {
        std::cout << "arg[" << i << "]: " << argv[i] << std::endl;
    }
    std::cout << "***************************************" << std::endl;

    return 0;
}