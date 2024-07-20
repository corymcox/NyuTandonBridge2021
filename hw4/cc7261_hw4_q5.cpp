#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int pos_int, tot_chars, x, num_stars, num_spaces;

    cout << "Please enter a positive integer: ";
    cin >> pos_int;

    tot_chars = (2 * pos_int) - 1;

    for (x = pos_int; x >= 1; x--){
        num_stars = (2 * x) - 1;
        num_spaces = max((tot_chars - num_stars) / 2, 0);
        cout << std::string(num_spaces,' ') << std::string(num_stars,'*') <<endl;
    }
    for (x = 1; x <= pos_int; x++){
        num_stars = (2 * x) - 1;
        num_spaces = max((tot_chars - num_stars) / 2, 0);
        cout << std::string(num_spaces,' ') << std::string(num_stars,'*') <<endl;
    }

    return 0;
}

