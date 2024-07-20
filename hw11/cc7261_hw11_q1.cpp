#include <iostream>

using namespace std;

void printTriangle(int n);
void printOpositeTriangles(int n);
void printDescAsc(int start, int end);
void printRuler(int n);

const char STAR = '*';

int main() {
    int n;

    cout << "Please enter a positive integer: ";
    cin >> n;
    cout << endl << "Part a." << endl << endl;
    printTriangle(n);

    cout << endl << endl;

    cout << "Part b." << endl << endl;
    printOpositeTriangles(n);

    cout << endl << endl;

    cout << "Part c." << endl << endl;
    printRuler(n);

    return 0;
}

void printTriangle(int n){
    if(n == 1){
        cout << string(1, STAR) <<endl;
    }
    else {
        printTriangle(n - 1);
        cout << string(n, STAR) <<endl;
    }
};

void printOpositeTriangles(int n){
    printDescAsc(1,n);
};

void printDescAsc(int start, int end){
    if(start == end){
        cout << string(end, STAR) <<endl;
        cout << string(end, STAR) <<endl;
    }
    else {
        cout << string(end, STAR) <<endl;
        printDescAsc(start,end -1);
        cout << string(end, STAR) <<endl;
    }
};

void printRuler(int n){

}