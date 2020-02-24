// HW_14_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <stdint.h>

int main()
{
    std::cout << "Enter text pls:";
    std::string Text;
    std::getline(std::cin, Text);
    
    

    std::cout <<"\n" << "Variable :" <<Text;
    std::cout << "\n" << "Length :" << Text.length();
    std::cout << "\n" << "1st Symbol :" << Text[0];
    std::cout << "\n" << "Last Symbol :" << Text[Text.size()-1];

}

