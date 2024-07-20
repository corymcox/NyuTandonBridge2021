#include <iostream>

using namespace std;

double eApprox(int n);

// To test your function use the following main:
int main() {
    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
    }
    return 0;
}

// This function is given a positive integer n, and returns an approximation of e, calculated by the
// sum of the first (n+1) addends of the infinite sum above.
double eApprox(int n){
    double i, sum = 1.0, previous_addend = 1.0, new_addend;

    for(i = 1; i <= n; i++){
        new_addend = (1.0 / i) * previous_addend;
        sum += new_addend;
        previous_addend = new_addend;
    }

    return sum;
}

//2.718281828459045 - Calculator
//2.71828182845899490871488524135 - Program