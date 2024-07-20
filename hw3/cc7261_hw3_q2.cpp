#include <iostream>

using namespace std;

int main() {

    int grad_year, current_year;
    std::string student_name, student_status;

    cout << "Please enter your name: ";
    cin >> student_name;
    cout << "Please enter your graduation year: ";
    cin >> grad_year;
    cout << "Please enter your current year: ";
    cin >> current_year;

    switch(grad_year - current_year){
        case 4:
            student_status = "a Freshman";
            break;
        case 3:
            student_status = "a Sophomore";
            break;
        case 2:
            student_status = "a Junior";
            break;
        case 1:
            student_status = "a Senior";
            break;
        default:
            student_status = "Graduated";
    }

    cout << student_name << ", you are " << student_status << endl;

    return 0;
}