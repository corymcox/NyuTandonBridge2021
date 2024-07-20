#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int dec_num, remainder, bin_num_pos, bin_value;
    std::string bin_num = "", pos_value;

    cout << "Enter decimal number: ";
    cin >> dec_num;

    remainder = dec_num;
    bin_num_pos = floor(log2(dec_num));

    if(bin_num_pos < 0) {
        bin_num = "0";
    } else {
        for(bin_num_pos = floor(log2(dec_num)); bin_num_pos >= 0; bin_num_pos--) {

            bin_value = pow(2, bin_num_pos);
            if ((remainder % bin_value) == remainder) {
                bin_num.append(std::string(1, '0'));
            } else {
                bin_num.append(std::string(1, '1'));
            }
            remainder = remainder % bin_value;
        }
    }

    cout << "The binary representation of " << dec_num << " is " << bin_num << endl;

    return 0;
}