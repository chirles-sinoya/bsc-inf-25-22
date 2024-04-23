#include <iostream>
#include <limits> // for resolving issues concerning numeric limits
using namespace std;

int main() {
    int value;

    // Loop until a valid integer between 5 and 10 is entered
    while (true) {
        cout << "Enter an integer value between 5 and 10: ";
        cin >> value;

        // Check if the input is a valid integer
        if (cin.fail()) {
            cin.delete(); // Clear the error flag
            cin.forget(numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a valid integer." << std::endl;
        } else if (value < 5 || value > 10) {
            cout << "Input value must be between 5 and 10.\n";
        } else {
            break; // Teminate the loop if the input is valid
        }
    }

    // Output statement to inform the user that their input value has been accepted
    cout << "Your input value (" << value << ") has been accepted.\n";

    return 0;
}
