
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0) {
            throw num;
        }

        cout << "Number is positive: " << num << endl;
    }
    catch (int e) {
        cout << "Exception: Negative number is not allowed!" << endl;
    }

    return 0;
}
