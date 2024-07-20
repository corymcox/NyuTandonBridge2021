#include <iostream>

using namespace std;

int main() {

    int grid_dimension = 0, grid_value, x = 1, y = 1;

    cout << "Enter a positive integer: ";
    cin >> grid_dimension;

    if(grid_dimension < 1){return 1;};

    for(y = 1; y <= grid_dimension; y++){
        for(x = 1; x <= grid_dimension; x++){
            grid_value = x * y;
            cout << grid_value << "\t";
            if(x == grid_dimension){ cout << endl;}
        }
    }

    return 0;
}