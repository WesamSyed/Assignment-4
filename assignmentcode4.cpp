#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
    int number = 0; // Variable to store the number for the multiplication table
    int range = 1;  // Variable to define the range of the table
    
    cout << "Multiplication table\n";
    cout << "Enter the number for which a multiplication table would be created: ";
    cin >> number;
    while (number < 0) { // Ensure the number is a non-negative integer
        cout << "Invalid input. Please enter a valid positive integer: ";
        number = 0; // Reset number to prevent unintended behavior
        cin >> number;
    }
    
    cout << "Enter the range (positive integer): ";
    cin >> range;
    while (range < 1 || range > 20) { // Restrict range to valid positive integers between 1 and 20
        cout << "Invalid input. Please enter a valid positive integer: ";
        range = 0; // Reset range to ensure correct input
        cin >> range;
    }

    for (int i = 1; i <= range; ++i) { // Loop to generate and display the multiplication table
        cout << number << " X " << i << " = " << number * i << endl;
    }

    return 0; // Indicate successful program termination
}
