#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    try {
        if (n % 2 != 0) {
            cout << "In try block" << endl;
            throw n;
        }
    }
    catch (int a) {
        cout << "Exception caught: " << a << endl;
    }
    return 0; // Adding a return statement at the end of main (optional but good practice)
}
