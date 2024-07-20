#include <iostream>

using namespace std;

int main() {

    int even_cntr = 2;
    int cntr = 1;
    int n;

    cout << "section a" << endl;
    cout << "Please enter a positive integer: ";
    cin >> n;

    while (cntr <= n) {
        cout << even_cntr << endl;
        even_cntr += 2;
        cntr++;
    }

    // Reset variables
    even_cntr = 2;
    cntr = 1;

    cout << endl << "section b" << endl;
    cout << "Please enter a positive integer: ";
    cin >> n;

    for (cntr = 1; cntr <= n; cntr++) {
        cout << even_cntr << endl;
        even_cntr += 2;
    }

    return 0;
}