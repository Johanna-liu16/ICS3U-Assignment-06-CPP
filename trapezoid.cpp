// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Nov 2022
// This program is converts c to f

#include <cmath>
#include <iostream>
#include <string>

double CalculateArea(float baseOne, float baseTwo, float height) {
    double area;

    // calculate volume
    area = (baseOne + baseTwo) / 2 * height;
    return area;
}

int main() {
    std::string strBaseOne;
    std::string strBaseTwo;
    std::string strHeight;
    int baseOne;
    int baseTwo;
    int height;
    double totalArea;

    // input
    std::cout << "This program calculates the area of a trapezoid."
              << std::endl;
    std::cout << "Enter length of the first base (cm): ";
    std::cin >> strBaseOne;
    std::cout << "Enter length of the second base (cm): ";
    std::cin >> strBaseTwo;
    std::cout << "Enter length of height (cm): ";
    std::cin >> strHeight;

    // process and output
    try {
        baseOne = std::stof(strBaseOne);
        baseTwo = std::stof(strBaseTwo);
        height = std::stof(strHeight);
        // call functions
        totalArea = CalculateArea(baseOne, baseTwo, height);
        std::cout << "The area of this trapezoid is " << totalArea << "cm².";
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
