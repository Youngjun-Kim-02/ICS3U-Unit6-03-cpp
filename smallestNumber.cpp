// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: June 2021
// This program uses an array

#include <iostream>
#include <random>
#include <array>


template<size_t N>
int FindSmallestNumber(std::array<int, N> randomNumbers) {
    int SmallestNumber = randomNumbers[0];

    for (int counter : randomNumbers) {
        if (SmallestNumber > counter) {
            SmallestNumber = counter;
        }
    }

    return SmallestNumber;
}

main() {
    // this function shows the Largest number in 10 random numbers

    std::array<int, 10> randomNumbers;
    int aNumber = 0;
    int SmallestNumber = 0;

    srand((unsigned int)time(NULL));

    // input
    for (int loopCounter = 1; loopCounter < 11; loopCounter++) {
        aNumber = (rand() % 100) + 1;
        randomNumbers[loopCounter] = aNumber;
        std::cout << "The random number " << loopCounter
                  << " is: " << aNumber << std::endl;
    }
    std::cout << " " << std::endl;

    SmallestNumber = FindSmallestNumber(randomNumbers);

    std::cout << "The smallest number is: " << SmallestNumber << std::endl;
}
