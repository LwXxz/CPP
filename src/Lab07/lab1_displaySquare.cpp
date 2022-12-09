#include <iostream>
#include "lab1_displaySquare.hpp"

// declare can be make defualt arg, but implement should not have defualt arg
void displaySquare(int side, char filledCharacter){
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {        
            std::cout << filledCharacter;
            // other way
            // putchar(filledCharacter);
        }
        std::cout << std::endl;
    }
}