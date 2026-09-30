// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: September 29 2026
// This program asks user for
// the diameter of a pizza in inches
// so it can caluculate the cost
// while including the tax.

#include <iostream>
#include <iomanip>

int main() {
    // declare constants
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRI_COST = 1.50;
    const float HST = 0.13;

    // declare variables
    float diameter, subtotal, total;

    // user input of diameter
    std::cout <<"Enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // calculate the subtotal
    subtotal = LABOUR_COST + RENTAL_COST + (INGRI_COST * diameter);

    // calculate the total with tax
    total = subtotal * (1 + HST);

    // display the output
    std::cout <<"Total pizza cost = " << "$" << total << "\n";
    std::cout << std::fixed << std::setprecision(2)
    << std::setfill('0') << total << "\n";
}
