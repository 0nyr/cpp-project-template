#include "ExampleFactory.hpp"

#include <iostream>

int main(int argc, char** argv)
{
    // print program arguments
    std::cout << "You have entered " << argc
        << " arguments:" << "\n";
  
    for (int i = 0; i < argc; ++i)
    {
        std::cout << "argv[" << i << "]: " << argv[i] << "\n";
    }

    ExampleFactory exampleFactory = ExampleFactory();

    return 0;
}