#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

// calculating the area of a triangle by using formular
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// calculating the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

// calculating the area of a square
int calculateSquareArea(int length) {
    return length* length;
}

int main() {
    int choice;
    do {
        cout << "Select a shape to calculate its area:\n";
        cout << "1.Triangle .\n";
        cout << "2. Rectangle.\n";
        cout << "3. Square'\n";
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;
        
        //choosing which figure to calculate its area basing on condition 

        switch (choice) {
            case '1': {
                double base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> value;
                cout << "Enter the height of the triangle: ";
                cin >> number;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            }
            case '2': {
                float length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;
            }
            case '3': {
                int side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(length) << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        }

        cout << "Do you want to calculate another shape? (y/n): ";
        cin >> choice;
    } while (choice == 'y' | choice == 'Y');

    cout << "Program terminated. Have a great day!" << endl;
