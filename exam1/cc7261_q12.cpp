#include <iostream>

using namespace std;

int main() {

    int inches_traveled = 0, total_inches = 0, days = 0;

    while(inches_traveled != -1){
        days++;
        total_inches += inches_traveled;

        cout << "Enter the number of inches the snail traveled in day #" << days <<"," << endl;
        cout << "or type -1 if they reached their destination:" << endl;
        cin >> inches_traveled;
    }

    cout << "In " << days << " days, the snail traveled " << total_inches/36 << " yards, " << (total_inches % 36)/12 << " feet and " << total_inches % 12 << " inches.";

    return 0;
}
