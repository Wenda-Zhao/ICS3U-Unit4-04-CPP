// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program break

#include <iostream>
#include <random>
#include <string>


int main() {
    // this fuction for break

    int someRandomNumber;
    std::string your_number;
    int your_number_int;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    someRandomNumber = idist(rgen);

    // input
    std::cout << "Enter your number: ";
    std::cin >> your_number;

    // process & output
    try {
        your_number_int = std::stoi(your_number);
        while (true) {
            if (your_number_int == someRandomNumber) {
                std::cout << "You are correct";
                break;
            } else {
                std::cout << "You are wrong, enter again: ";
                std::cin >> your_number_int;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "It is not a integer";
    }
}
