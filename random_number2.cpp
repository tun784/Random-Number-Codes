#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int initializeRandomNumber() {
    // Initializing random number generator 
    srand(time(0));
    // Generating random number between 8 and 64
    int randomNumber = rand() % 57 + 8;

    return randomNumber;
}
int main(){
for (int i = 1; i <= 64; i++){
        cout << "Random number between 8 and 64: " << initializeRandomNumber() << endl;
    }

    system("pause");
    return 0;
}