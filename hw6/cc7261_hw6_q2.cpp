#include <iostream>

using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main() {
    int number_of_triangles;
    char symbol;

    cout << "Enter the number of triangles in the pine tree: ";
    cin >> number_of_triangles;
    cout << "Enter the character with which to fill the triangles: ";
    cin >> symbol;

    printPineTree(number_of_triangles, symbol);

    return 0;
}

// Prints a triangle made of symbol character that is maximally n rows, shifted from the left margin by m spaces
void printShiftedTriangle(int n, int m, char symbol){
    int i;
    for(i = 1; i <= n; i++){
        cout << string(m + n - i,' ')  << string(2 * i - 1, symbol) << endl;
    }
}

// Prints n triangles of symbol character stacked accordingly utilizing the helper function printShiftedTriangle
void printPineTree(int n, char symbol){
    int i;
    for(i = 1; i <= n; i++){
        printShiftedTriangle(i + 1,n - i, symbol);
    }
}

