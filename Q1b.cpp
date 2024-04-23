#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()

using namespace std;
int main() {
    // Initialize random seed
    srand(time(0));

    // Generating a random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Checking the subscription status and output the appropriate message
    if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired.\n";
    } else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!Renew now and save 20%."\n;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days\nRenew now and save 10%!"\n;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!"\n;
    } else {
        cout << "You have an active subscription."\n;
    }

    return 0;
}
