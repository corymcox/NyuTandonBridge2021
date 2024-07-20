#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double weight, height, bmi;
    std::string weight_status;

    cout << "Please enter weight (in pounds): ";
    cin >> weight;
    cout << "Please enter height (in inches): ";
    cin >> height;

    bmi = (weight * 0.453592) / pow((height * 0.0254),2);

    if (bmi < 18.5) {
        weight_status = "Underweight";
    } else if (bmi <= 25.0) {
        weight_status = "Normal";
    } else if (bmi <= 30.0) {
        weight_status = "Overweight";
    } else {
        weight_status = "Obese";
    }

    cout << "The weight status is: " << weight_status << endl;

    return 0;
}