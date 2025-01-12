#include <iostream> // Include input-output stream library
using namespace std;
int main() {
    int a, b;

    // Prompt user to enter the first and second numbers
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    // Swap values if 'a' is greater than 'b' to ensure 'a' is smaller
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Calculate the midpoint as a float to handle precision
    float midpoint = (a + b) / 2.0;
    
    // Loop through the range from 'a' to 'b'
    for (int i = a; i <= b; i++) {
        cout << "Number " << i << " is ";
        // Check and output whether the number is less, equal, or greater than the midpoint
        if (i < midpoint) {
            cout << "less than the midpoint." << endl;
        } else if (i > midpoint) {
            cout << "greater than the midpoint." << endl;
        } else {
            cout << "equal to the midpoint." << endl;
        }
    }

    return 0; // Exit program successfully
}
