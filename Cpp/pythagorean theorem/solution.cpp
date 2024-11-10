// solution.cpp
#include <iostream>
#include <cmath>  // For sqrt() function
#include <iomanip> // For setting decimal precision

// Function to calculate the hypotenuse using the Pythagorean Theorem
double calculateHypotenuse(double a, double b) {
    // Applying the Pythagorean Theorem: c = sqrt(a^2 + b^2)
    return sqrt(a * a + b * b);
}

int main() {
    // Declare variables for the lengths of the triangle legs
    double a, b;

    // Input values for the legs
    std::cout << "Enter the length of the first leg (a): ";
    std::cin >> a;

    std::cout << "Enter the length of the second leg (b): ";
    std::cin >> b;

    // Check if the input values are positive
    if (a <= 0 || b <= 0) {
        std::cout << "Error: Lengths of the triangle's legs must be positive numbers." << std::endl;
        return 1;
    }

    // Calculate the hypotenuse
    double hypotenuse = calculateHypotenuse(a, b);

    // Output the result, rounded to two decimal places
    std::cout << std::fixed << std::setprecision(2); // Set precision to 2 decimal places
    std::cout << "The length of the hypotenuse is: " << hypotenuse << std::endl;

    return 0;
}
