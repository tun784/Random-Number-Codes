#include <iostream>
#include <random>

int generateRandomNumber(int minRange, int maxRange) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(minRange, maxRange);
    return distribution(gen);
}

int generateRandomEvenNumber(int minRange, int maxRange) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(minRange, maxRange);
    int number = distribution(gen);
    if (number % 2 != 0) {
        number += 1;
    }
    return number;
}

int generateRandomOddNumber(int minRange, int maxRange) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(minRange, maxRange);
    int number = distribution(gen);
    if (number % 2 == 0) {
        number += 1;
    }
    return number;
}

int main() {
    int number1to100 = generateRandomNumber(1, 100);
    int number1to50 = generateRandomNumber(1, 50);
    int number7to77 = generateRandomNumber(7, 77);
    int number2to64 = generateRandomNumber(2, 64);
    int evenNumber4to82 = generateRandomEvenNumber(4, 82);
    int oddNumber7to77 = generateRandomOddNumber(7, 77);

    std::cout << "Random number from 1 to 100: " << number1to100 << std::endl;
    std::cout << "Random number from 1 to 50: " << number1to50 << std::endl;
    std::cout << "Random number from 7 to 77: " << number7to77 << std::endl;
    std::cout << "Random number from 2 to 64: " << number2to64 << std::endl;
    std::cout << "Random even number from 4 to 82: " << evenNumber4to82 << std::endl;
    std::cout << "Random odd number from 7 to 77: " << oddNumber7to77 << std::endl;

    return 0;
}
