#include <iostream>
using namespace std;

void lengthConverter() {
    double meters;
    cout << "Enter length in meters: ";
    cin >> meters;
    cout << "In kilometers: " << meters / 1000 << " km\n";
    cout << "In centimeters: " << meters * 100 << " cm\n";
    cout << "In inches: " << meters * 39.3701 << " in\n";
}

void weightConverter() {
    double kg;
    cout << "Enter weight in kilograms: ";
    cin >> kg;
    cout << "In grams: " << kg * 1000 << " g\n";
    cout << "In pounds: " << kg * 2.20462 << " lbs\n";
}

void tempConverter() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "In Fahrenheit: " << (celsius * 9/5) + 32 << " °F\n";
    cout << "In Kelvin: " << celsius + 273.15 << " K\n";
}

int main() {
    int choice;
    do {
        cout << "\n=== Unit Converter ===\n";
        cout << "1. Convert Length\n2. Convert Weight\n3. Convert Temperature\n0. Exit\nYour choice: ";
        cin >> choice;

        switch (choice) {
            case 1: lengthConverter(); break;
            case 2: weightConverter(); break;
            case 3: tempConverter(); break;
            case 0: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
