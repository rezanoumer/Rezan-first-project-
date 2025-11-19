#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Enter x: ";
    cin >> x;

    if (x > 0) {
        cout << "x is positive." << endl;
        
        if (x % 2 == 0) {
            cout << "It is also even." << endl;
        } else {
            cout << "It is also odd." << endl;
        }
    } else if (x < 0) {
        cout << "x is negative." << endl;
    } else {
        cout << "x is zero." << endl;
    }

    return 0;
}
