#include <iostream>

using namespace std;

int main() {

    const int I = 1;
    const int V = 5;
    const int X = 10;
    const int L = 50;
    const int C = 100;
    const int D = 500;
    const int M = 1000;

    int dec_num, remainder, instances;
    std::string roman_num = "";

    cout << "Enter decimal number: ";
    cin >> dec_num;

    remainder = dec_num;

    while(remainder > 0) {
        if (remainder >= M) {
            instances = remainder/M;
            roman_num.append(std::string(instances,'M'));
            remainder = remainder % M;
        } else if (remainder >= D) {
            instances = min(remainder/D,1);
            roman_num.append(std::string(instances,'D'));
            remainder = remainder - (instances * D);
        } else if (remainder >= C) {
            instances = min(remainder/C,4);
            roman_num.append(std::string(instances,'C'));
            remainder = remainder - (instances * C);
        } else if (remainder >= L) {
            instances = min(remainder/L,1);
            roman_num.append(std::string(instances,'L'));
            remainder = remainder - (instances * L);
        } else if (remainder >= X) {
            instances = min(remainder/X,4);
            roman_num.append(std::string(instances,'X'));
            remainder = remainder - (instances * X);
        } else if (remainder >= V) {
            instances = min(remainder/V,1);
            roman_num.append(std::string(instances,'V'));
            remainder = remainder - (instances * V);
        } else if (remainder >= I) {
            instances = min(remainder/I,4);
            roman_num.append(std::string(instances,'I'));
            remainder = remainder - (instances * I);
        }
    }

    cout << dec_num << " is " << roman_num << endl;

    return 0;
}