#include <iostream> // Include the iostream library for input and output
using namespace std; 
int main() {

    // Variables to store user choice, account number, and other calculations
    int choice = 0; 
    int account_num = 0; 
    int remainder = 0; 
    int reversed_number = 0; 
    int sum = 0;

    // Prompt the user to enter their account number
    cout << "Enter account number:" << endl;
    cin >> account_num;

    // Present the user with options for reversing the account number or calculating the sum of its digits
    cout << "Enter Process to Execute:\n 1. To reverse the account number\n 2. Calculate sum of account number digits" << endl;
    cin >> choice;

    // Use a switch statement to perform the selected operation
    switch (choice) {
    case 1: // Case for reversing the account number
        // Loop through the digits of the account number to reverse it
        while (account_num != 0) {
            remainder = account_num % 10; // Get the last digit
            reversed_number = reversed_number * 10 + remainder; // Build the reversed number
            account_num /= 10; // Remove the last digit from the account number
        }
        // Display the reversed account number
        cout << "Reversed account number: " << reversed_number << endl;
        break;

    case 2: // Case for calculating the sum of the digits
        // Loop through the digits of the account number to calculate their sum
        while (account_num > 0) {
            remainder = account_num % 10; // Get the last digit
            sum = sum + remainder; // Add the digit to the sum
            account_num = account_num / 10; // Remove the last digit from the account number
        }
        // Display the sum of the account number's digits
        cout << "Sum of Account Number:" << sum << endl;
        break;

    default: // Handle invalid choices
        // Inform the user if their input is not a valid choice
        cout << "Invalid choice!" << endl;
    }

    //end of the program
    
  return 0;
}