#include <iostream>

using namespace std;

int main() {

    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    double num;
    int method, answer;

    cout << "Please enter a Real number: ";
    cin >> num;
    cout << "Choose your rounding method: " << endl;
    cout << "1. Floor round " << endl;
    cout << "2. Ceiling round " << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> method;

    switch(method){
        case FLOOR_ROUND:
            answer = (int)(num);
            break;
        case CEILING_ROUND:
            answer = (int)(num + 1.0);
            break;
        case ROUND:
            answer = (int)(num + 0.5);
            break;
    }

    cout << answer;

    return 0;
}