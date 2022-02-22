#pragma once

#include <iostream>

class Example
{
    public:
        Example() {};
        ~Example() {};

        inline void hello()
        {
            std::cout << "Hello World!" << std::endl;
        }
};