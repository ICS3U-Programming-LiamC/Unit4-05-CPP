// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May DATE, 2021
// This program STUFF STUFF


// include modules
#include <iostream>
#include <cmath>

// variables
int numOfNums;
int counter;
float userNum;
float userNumAsFloat;
int sum;

// main func
int main() {
    // make the string version of the var
    std::string numOfNumsStr;

    // get the number from the user
    std::cout << "How many numbers do you want to add: ";
    std::cin >> numOfNumsStr;

    // try to turn it into an int
    try {
        // try to turn it into a integer
        numOfNums = std::stoi(numOfNumsStr);

        // tell the user their numbers must be whole
        std::cout << "Numbers must be whole numbers\n";

        // the while loop
        while (counter < numOfNums) {
            // make the string version of the var
            std::string userNumStr;

            // gets the users number
            std::cout << "Input number: ";
            std::cin >> userNumStr;

            try {
                // make the string into a float, then make the float
                // into a integer
                userNumAsFloat = std::stof(userNumStr);
                userNum = static_cast<int>(userNumAsFloat);

                // if the float and integer are different that means that
                // it is a decimal.
                if (userNum != userNumAsFloat) {
                    std::cout << "Number cant be a decimal\n";
                    continue;

                } else if (userNum < 0) {
                    std::cout << "Number must be positive\n";
                    continue;

                } else {
                    // add to the counter and add to the sum
                    sum = sum + userNum;
                    counter = counter + 1;
                }


            // if the number could not be an integer
            } catch (std::invalid_argument) {
                std::cout << "This is not a valid number\n";
            }
        }

        // print out the sum
        std::cout << "Your sum is " << sum;


    // if could not turn into integer
    } catch (std::invalid_argument) {
        std::cout << "This is not a valid number\n";
    }
}
