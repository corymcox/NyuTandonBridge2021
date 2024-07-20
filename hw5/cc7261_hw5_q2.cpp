#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int guess, guesses_left = 5, my_number, low_range = 1, high_range = 100;

    srand(time(0));
    my_number = (rand() % 100) + 1;

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

    while(guesses_left > 0){
        cout << "Range: [" << low_range << ", " << high_range << "], Number of guesses left: " << guesses_left << endl;
        cout << "Your guess: ";
        cin >> guess;
        if(guess == my_number){
            cout << "Congrats! You guessed my number in " << 5 - guesses_left + 1 << " guesses." << endl;
            return 0;
        } else if(guesses_left == 1 & guess != my_number){
            cout << "Out of guesses! My number is " << my_number;
            return 0;
        } else if(guess < my_number){
            cout << "Wrong! My number is greater." << endl;
            low_range = guess + 1;
        } else { //less than
            cout << "Wrong! My number is smaller." << endl;
            high_range = guess - 1;
        }
        guesses_left --;
        cout << endl;
    }

    return 0;
}
