#include <iostream>
#include <string>

using namespace std;

void printDivisors(int num);

int main() {
    int pos_int;

    cout << "Please enter a positive integer >= 2: ";
    cin >> pos_int;
    printDivisors(pos_int);

    return 0;
}

// This function prints the integer divisors of a positive integer n in order with no duplicates
void printDivisors(int num){
    int i ;
    string upper_divisors;

    for(i = 1; i*i <= num; i++){
        if(num % i == 0){
            cout << i << " ";
            if( i*i != num){
                upper_divisors = to_string(num/i) + " " + upper_divisors;
            }
        }
    }
    cout << upper_divisors << endl;
}
