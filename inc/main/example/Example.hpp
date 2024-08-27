#pragma once

#include "utils/utils.hpp"

#include <iostream>
#include <string>
#include <array>

class Example
{
    public:
        Example() {};
        ~Example() {};

        inline void hello()
        {
            std::string messageToPrint = 
                "[" + std::to_string(nbOfMessages) + 
                "]" + randomVerse();
            CustomPrint(messageToPrint);
            nbOfMessages++;
        }

        int GenerateRandomNumber(int min, int max);

    private:
        static std::array<std::string, 18> const invictusVerses; // declaration
        int nbOfMessages = 0;

        std::string randomVerse();
        
};