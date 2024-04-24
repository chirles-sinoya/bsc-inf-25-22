#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random integer between 0 and 11
    int daysUntilExpiration = std::rand() % 12; // Generates a number in the range [0, 11]

    // Output the appropriate subscription message
    if (daysUntilExpiration <= 0) {
        std::cout << "Your subscription has expired." << std::endl;
    } else if (daysUntilExpiration <= 1) {
        std::cout << "Your subscription expires within a day!" << std::endl;
        std::cout << "Renew now and save 20%!" << std::endl;
    } else if (daysUntilExpiration <= 5) {
        std::cout << "Your subscription expires in " << daysUntilExpiration << " days." << std::endl;
        std::cout << "Renew now and save 10%!" << std::endl;
    } else if (daysUntilExpiration <= 10) {
        std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
    } else {
        std::cout << "You have an active subscription." << std::endl;
    }

    return 0;
}
