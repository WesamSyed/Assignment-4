#include<iostream>
#include<cstdlib> // Includes libraries for input-output and random number generation
using namespace std;
int main() {
    // Generate a random number between 1 and 100
    int random_number = 1 + (rand() % 100);
    int guessed_number;

    cout << "Guess the number Game" << endl;

    while (true) { // Infinite loop to keep the game running until the correct guess
        cout << "Your guess: ";
        cin >> guessed_number;

        if (random_number == guessed_number) { 
            // Check if the guess matches the random number
            cout << "You correctly guessed the number!\n";
            break; // Exit the loop if the guess is correct
        }
        else if (guessed_number > random_number) {
            // Hint if the guess is higher than the random number
            cout << "Your guess is too high\n";
        }
        else {
            // Hint if the guess is lower than the random number
            cout << "Your guess is too low\n";
        }
    }

    return 0; // End of the program
}
