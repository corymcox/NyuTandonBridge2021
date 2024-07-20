#include <iostream>

using namespace std;

int main() {

    char inLetter, currentLetter, a = 'a', B = 'B';
    int x,y,z, rows, max_row_len, spaces, letters;

    cout << "Please enter a lower-case letter:" << endl;
    cin >> inLetter;

    rows = inLetter - a + 1;
    max_row_len = 2*(inLetter - a) + 1;

    for(x = 1; x <= rows; x++){
        spaces = rows - x;
        letters = (2*x) - 1;
        if(x  %2 == 0){
            currentLetter = a + (x-33);
        } else {
            currentLetter = a + (x-1);
        }
        for(y = 1; y <= spaces; y++){
            cout << " ";
        }
        for(z = 1; z <= letters; z++){
            cout << currentLetter;
        }
        cout << endl;
    }
    return 0;
}
