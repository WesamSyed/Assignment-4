#include <iostream>
using namespace std;
int main() {
    int range;
    int sum = 0;

    cout << "Enter a range: "; // Prompt user for input
    cin >> range;

    // Iterate from 1 to the specified range
    for (int i = 1; i <= range; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            sum += i; // Add odd number to sum
        }
    }

    cout << "Sum of all odd numbers in the given range: " << sum << endl; // Display result
    return 0;
}
