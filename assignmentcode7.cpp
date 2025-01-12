#include <iostream>
using namespace std;
int main() {
    int n; // Variable to store user input
    int count = 0; // Counter for numbers divisible by 3

    cout << "Enter a number: "; // Prompt user to enter a number
    cin >> n; // Read the input number

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) { // Check if the number is divisible by 3
            count++; // Increment counter if divisible by 3
        }
    }

    // Display the result
    cout << "Count of numbers which are divisble by 3 between 1 and " << n << ": "<< count << endl;
    
    return 0; // End of program
}
