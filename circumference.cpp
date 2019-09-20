// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on September 2019
// this program solves the circumference of a circle
// with user input

#include <iostream>


int main() {
    // this function calculates area
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of rectangle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "Circummference is " << circumference << "mm" << std::endl;
}
