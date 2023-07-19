#include <iostream>
#include <fstream>
#include <ctime>

int main() {
    const long arraySize = 517440;
    long Array[arraySize];

    // Generate unique random numbers
    srand(time(nullptr));
    for (int i = 0; i < arraySize; i++) {
        Array[i] = i + 1;
    }
    for (int i = 0; i < arraySize - 1; ++i) {
        int j = i + rand() % (arraySize - i);
        std::swap(Array[i], Array[j]);
    }

    // Save the array to a text file
    std::ofstream outputFile("Output.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Failed to create the output file." << std::endl;
        return 1;
    }

    for (int i = 0; i < arraySize; ++i) {
        outputFile << Array[i] << "\n";
    }
    outputFile.close();

    std::cout << "Array successfully created and saved to 'Output.txt'." << std::endl;

    return 0;
}