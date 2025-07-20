// Jeremy Carney, CSC450, July 20th, 2025
// A simple program to display a person's information

#include <iostream> // Include input/output library
#include <string>   // Needed for string variables

// Use standard namespace
using namespace std;

// Main function
int main() {
    // Declare variables for person's information
    string firstName = "Bobby";
    string lastName = "Brown";
    string streetAddress = "1234 Smackdown St";
    string city = "Whitney";
    int zipCode = 52731;

    // Display the person's information
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    // Pause the program so the user can see the output
    cout << "Press any key to continue...";
    cin.get();

    // Return 0 to indicate successful execution
    return 0;
}