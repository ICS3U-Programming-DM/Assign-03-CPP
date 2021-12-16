// Copyright © 2021 Dylan Melo All rights reserved
//
// Created by Dylan Melo
// Created on December 2021
// This program gets the user to enter length and width of a rectangle
// and it will tell them if it is or is not a square.
#include <iostream>


int main() {
    // declare variables
    float length, width;

    // Tell user what program does
  std::cout << "Today we will tell you if";
  std::cout << "\033[0;33m" << std::endl;
  std::cout << "your rectangle is a square!\n";

    // get user length
  std::cout << "\033[0;36m" << std::endl;
  std::cout << "Enter the length: ";
  std::cin >> length;

    // get user width
  std::cout << "\033[0;36m" << std::endl;
  std::cout << "Enter the width: ";
  std::cin >> width;

    // if else statement
    if (length == width) {
        std::cout << "Your rectangle is a square!";
    } else {
        std::cout << "Your rectangle is not a square!";
    }
}
