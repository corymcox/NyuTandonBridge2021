#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int num_sols;
    double a, b, c, sol1, sol2, determinant;
    std::string sol_str;

    cout << "Please enter the value of a: ";
    cin >> a;
    cout << "Please enter the value of b: ";
    cin >> b;
    cout << "Please enter the value of c: ";
    cin >> c;

    if( a == b & b == c & c == 0.0){
        num_sols = -1;
        sol_str = "The equation has an infinite number of solutions.";
    } else {
        determinant = (b * b) - (4.0 * a * c);
        if(determinant == 0.0 & a != 0.0) {
            num_sols = 1;
            sol_str = "The equation has a single real solution x=";
        } else if (determinant > 0.0) {
            num_sols = 2;
            sol_str = "The equation has two real solutions x=";
        } else if (a == 0 & b == 0 & c != 0) {
            num_sols = 0;
            sol_str = "The equation has no solutions.";
        } else {
            num_sols = 0;
            sol_str = "The equation has no real solutions.";
        }
    }

    if(num_sols > 0 & determinant >= 0.0) {
        sol1 = ((-1.0 * b) + sqrt((b * b) - (4.0 * a * c)))/(2.0 * a);
        sol2 = ((-1.0 * b) - sqrt((b * b) - (4.0 * a * c)))/(2.0 * a);
    }

    if (num_sols == 2) {
        cout << sol_str << sol1 << " and " << sol2 << endl;
    } else if (num_sols == 1){
        cout << sol_str << sol1 <<endl;
    } else {
        cout << sol_str <<endl;
    }

    return 0;
}