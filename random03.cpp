#include <iostream>
#include <fstream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#define ARRAY_SIZE 6
int Array[ARRAY_SIZE];

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

    Array[0] = generateRandomNumber(1, 100);
    Array[1] = generateRandomNumber(1, 50);
    Array[2] = generateRandomNumber(7, 77);
    Array[3] = generateRandomNumber(2, 64);
    Array[4] = generateRandomEvenNumber(4, 82);
    Array[5] = generateRandomOddNumber(7, 77);

    std::cout << "Random number from 1 to 100: " << Array[0] << std::endl;
    std::cout << "Random number from 1 to 50: " << Array[1] << std::endl;
    std::cout << "Random number from 7 to 77: " << Array[2] << std::endl;
    std::cout << "Random number from 2 to 64: " << Array[3] << std::endl;
    std::cout << "Random even number from 4 to 82: " << Array[4] << std::endl;
    std::cout << "Random odd number from 7 to 77: " << Array[5] << std::endl;

    // Save the array to a text file
    std::ofstream outputFile("Output.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Failed to create the output file." << std::endl;
        return 0;
    }

    for (int i = 0; i < ARRAY_SIZE; i++) {
        outputFile << Array[i] << "\n";
    }
    outputFile.close();

    std::cout << "Array successfully created and saved to 'Output.txt'." << std::endl;

    return 0;
}
