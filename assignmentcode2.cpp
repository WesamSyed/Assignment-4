#include <iostream> // Include the input/output stream library
using namespace std;
int main() {
    int n; // Variable to store the upper limit of the range
    int i; // Loop counter variable
    int even_count = 0; // Counter for even numbers
    int odd_count = 0; // Counter for odd numbers

    cout << "Enter the range (1 to n): " << endl; // Prompt user for input
    cin >> n; // Read the upper limit of the range

    // Loop through numbers from 1 to n
    for (i = 1; i <= n; ++i) {
        if (i % 2 == 0) { // Check if the number is even
            cout << i << " is even" << endl; // Print that the number is even
            ++even_count; // Increment even number counter
        } else { // If not even, it is odd
            cout << i << " is odd" << endl; // Print that the number is odd
            ++odd_count; // Increment odd number counter
        }
    }

    // Print the total count of even numbers
    cout << "Total even numbers: " << even_count << endl;
    // Print the total count of odd numbers
    cout << "Total odd numbers: " << odd_count << endl;
    
    return 0; // Exit the program
}
