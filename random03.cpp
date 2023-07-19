#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int generateRandomNumber(int minRange, int maxRange) {
    return rand() % (maxRange - minRange + 1) + minRange;
}

int generateRandomEvenNumber(int minRange, int maxRange) {
    int number = generateRandomNumber(minRange, maxRange);
    if (number % 2 != 0) {
        // If the generated number is odd, add 1 to make it even
        number++;
    }
    return number;
}

int generateRandomOddNumber(int minRange, int maxRange) {
    int number = generateRandomNumber(minRange, maxRange);
    if (number % 2 == 0) {
        // If the generated number is even, add 1 to make it odd
        number++;
    }
    return number;
}

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

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
