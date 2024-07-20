#include <iostream>

using namespace std;

int fib(int n);

int main() {
    int n;

    cout << "Please enter a positive integer: ";
    cin >> n;
    cout << fib(n);

    return 0;
}

// Calculates the n-th value in the Fibonacci series
int fib(int n){
    int f_i, f_i_minus_1, f_i_minus_2, i;

    if(n < 3){
        return 1;
    } else {
        for(i = 3; i <= n; i++){
            if(i == 3){
                f_i_minus_1 = 1;
                f_i_minus_2 = 1;
            }
            f_i = f_i_minus_1 + f_i_minus_2;

            // set variables to lag for next iteration
            // NOTE: order of setting variable is critical!
            f_i_minus_2 = f_i_minus_1;
            f_i_minus_1 = f_i;

        }
    }

    return f_i;
}
