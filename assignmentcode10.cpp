#include <iostream>
using namespace std;
int main() {
    int number, temp, digit_count = 0, even = 0, odd = 0;

    cout << "Enter a number: ";
    cin >> number;

    temp = number;
    // Count the number of digits in the number
    while (temp > 0) {
        digit_count++;
        temp /= 10;
    }
    
    int digits[digit_count];

    temp = number;
    // Store the digits of the number in reverse order
    for (int i = digit_count - 1; i >= 0; i--) {
        digits[i] = temp % 10;
        temp /= 10;
    }

    // Count even and odd digits
    for (int i = 0; i < digit_count; i++) {
        if (digits[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Total digits: " << digit_count << endl;
    cout << "Even digits count: " << even << endl;
    cout << "Odd digits count: " << odd << endl;

    return 0;
}
