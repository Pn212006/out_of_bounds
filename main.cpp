#include <iostream>
#include <stdexcept> // needed for exception handling

using namespace std;

int main() {
    // Create an array of 5 numbers
    int numbers[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter an index (0 - 4): ";
    cin >> index;

    try {
        // Check if index is valid
        if (index < 0 || index >= 5) {
            throw out_of_range("Index is out of range!");
        }

        cout << "Value at index " << index << " = " << numbers[index] << endl;
    }
    catch (out_of_range &error) {
        cout << "Error: " << error.what() << endl;
    }

    cout << "Program finished." << endl;

    return 0;
}
