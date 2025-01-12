#include <iostream>
using namespace std;
int main() {
    // Declaring variables
    int batchNumber, sumOfDigits = 0;

    // Prompt user for batch number
    cout << "Enter the batch number: ";
    cin >> batchNumber;

    // Store original batch number for display
    int originalBatchNumber = batchNumber;

    // Calculate the sum of the digits
    while (batchNumber > 0) {
        sumOfDigits += batchNumber % 10; // Add the last digit to the sum
        batchNumber /= 10;              // Remove the last digit from the number
    }

    // Check if the sum of digits is divisible by 3
    if (sumOfDigits % 3 == 0) {
        cout << "Batch number " << originalBatchNumber << " is valid (Sum of digits: " 
             << sumOfDigits << ")." << endl;
    } else {
        cout << "Batch number " << originalBatchNumber << " is invalid (Sum of digits: " 
             << sumOfDigits << ")." << endl;
    }

    return 0; // End the program
}
