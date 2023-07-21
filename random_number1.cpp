#include <iostream> 
#include <time.h>
using namespace std;

// Function to get the random number between 8 and 64
int getRandomNumber() {
	srand(time(NULL));
	return (rand() % 56 + 8);
}
// Driver code 
int main(){
    for (int i = 1; i <= 64; i++) {
        cout << getRandomNumber() << " ";
    }
    cout << endl;        

    system("pause");
	return 0;
}
