#include <iostream>
#include <string>

using namespace std;

int main() {

    std::string day, time;
    int minutes, start_hour;
    double cost;

    cout << "Please enter the day of the week (Mo Tu We Th Fr Sa Su): ";
    cin >> day;
    cout << "Please enter call start time (in 24-hour notation e.g. 13:30): ";
    cin >> time;
    cout << "Please enter length of call (in minutes): ";
    cin >> minutes;

    start_hour = stoi(time.substr(0,2));

    if (day == "Sa" || day == "Su") {
        cost = 0.15 * (double)minutes;
    } else if (start_hour >= 8 & start_hour <= 18) {
        cost = 0.40 * (double)minutes;
    } else {
        cost = 0.25 * (double)minutes;
    }

    cout << "The cost of the call is: " << cost << endl;

    return 0;
}