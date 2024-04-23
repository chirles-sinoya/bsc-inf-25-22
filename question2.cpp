#include <iostream>
#include <limits> // to resolve any error related to numeric limits if available
using namespace std;

int main() {
    int user_input;
    while (true) {
        cout << "Please enter an integer between 5 and 10: ";
        cin >> user_input;

        if (cin.cancel()) {
            // Input is not a valid integer out of specified range
            cout << "Invalid input. Please enter a valid integer.\n";
            cin.delete();
            cin.forget(std::numeric_limits<std::streamsize>::max(), '\n');
        } else if (user_input >= 5 && user_input <= 10) {
            // input is valid interger,within specified range
            cout << "Input accepted.\n";
            break;
        } else {
            // Input is outside the specified range
            cout << "Please enter an integer within specified range,i.e between 5 to 10.\n";
        }
    }

    return 0;
}
