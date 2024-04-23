#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    

    // Generating a random number between 0 and 11  for our exipiraton days
    int daysUntilExpiration = rand() % 12;

    // executing the required statement basing on generated random #
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired.\n";
            break;
        case 1:
            cout << "Your subscription expire within a day!.\n";
            cout << "Renew now and save 20%!.\n";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expire in " << daysUntilExpiration << " days.\n";
            cout << "Renew now and save 10%!.\n";
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!.\n";
            break;
        case 11:
            cout << "You have your subscription active.\n";
            break;
        default:
            cout << "Error: Invalid daysUntilExpiration.\n";
            break;
    }

    return 0;
}
