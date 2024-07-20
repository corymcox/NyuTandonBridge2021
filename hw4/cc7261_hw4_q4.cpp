#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int len_seq, x, i;
    double geo_mean = 1.0;

    cout << "section a" << endl;
    cout << "Please enter the length of the sequence: ";
    cin >> len_seq;

    cout << "Please enter your sequence: " << endl;

    for (x = 1; x <= len_seq; x++){
        cin >> i;
        geo_mean = geo_mean * i;
    }

    geo_mean = pow(geo_mean, 1.0 / len_seq);

    cout << "The geometric mean is: " << geo_mean << endl;

    // Reset variables
    i = 1;
    geo_mean = 1.0;
    len_seq = 0;

    cout << endl << "section b" << endl;
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: " << endl;

    while (i != -1){
        cin >> i;
        if(i != -1){
            len_seq++;
            geo_mean = geo_mean * i;
        }
    }

    geo_mean = pow(geo_mean, 1.0 / len_seq);

    cout << "The geometric mean is: " << geo_mean << endl;

    return 0;
}