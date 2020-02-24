// HW_14_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <stdint.h>

int main()
{
    //Enter String Var
    std::cout << "Enter text pls:";
    std::string Text;
    std::getline(std::cin, Text);
    

    //Display Parameters of Var
    std::cout <<"\n" << "Variable :" <<Text;
    std::cout << "\n" << "Length :" << Text.length();
    std::cout << "\n" << "1st Cymbol :" << Text[0];
    std::cout << "\n" << "Last Cymbol :" << Text[Text.size()-1];

}

