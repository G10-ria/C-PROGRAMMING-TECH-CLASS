/* 
C++ function to calculate the volume of a cylinder
Author: Gloria Mwenga
Ren no:BSCIT-01-0155/2024
Date: 20 January 2024
Version 1
*/

#include <iostream>
#include <cmath> // For M_PI (value of π)

using namespace std;

// Function to calculate the volume of a cylinder
double calculateCylinderVolume(double radius, double height) {
    return M_PI * radius * radius * height;
}

int main() {
    double radius, height;

    // Prompt user for input
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate and display the volume
    double volume = calculateCylinderVolume(radius, height);
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
