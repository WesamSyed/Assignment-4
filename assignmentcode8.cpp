#include <iostream> // Include input/output library
using namespace std;
int main() {
    double bids[5]; // Array to store 5 bids
    double highest_bid = 0; // Variable to track the highest bid
    
    cout << "\n==========\nAuction\n==========\n"; // Display auction header

    cout << "Place 5 bids:" << endl; // Prompt user to enter 5 bids
    for (int i = 0; i < 5; i++) {
        cout << "Bid " << i + 1 << ": "; // Ask for each bid
        cin >> bids[i]; // Read the bid from user

        if (bids[i] > highest_bid) { // Check if the current bid is the highest
            highest_bid = bids[i]; // Update highest_bid if condition is true
        }
    }

    cout << "The highest bid is: " << highest_bid << endl; // Display the highest bid
    return 0; // End of program
}
