#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {


    int i = 1, x, y, z, b10, pos, neg, l;
    std::string pos_int, str_x;

    cout << "Please enter a positive integer: ";
    cin >> pos_int;

    l = pos_int.length();
    i = std::stoi(pos_int);

    for(x = 1; x <= i; x++) {
        pos = 0;
        neg = 0;

        for(y = l-1; y >= 0; y--) {
            b10 = pow(10,y);
            z = x / b10;

            if(z % 2 == 0) {
                pos++;
            } else {
                neg++;
            }
        }

        if(pos > neg)
            cout << x << endl;
    }

    return 0;
}

