#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
        // Nested if to check even or odd
        if (number % 2 == 0) {
            cout << "It is also even." << endl;
        } else {
            cout << "It is also odd." << endl;
        }
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}