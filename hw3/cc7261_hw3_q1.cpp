#include <iostream>

using namespace std;

int main() {

    double price1, price2, discount, discount_price, total_price, tax_rate;
    std::string club_card;

    cout << "Enter price of first item: ";
    cin >> price1;
    cout << "Enter price of second item: ";
    cin >> price2;
    cout << "Does customer have a club card? [Y/N]: ";
    cin >> club_card;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax_rate;
    cout << "Base price: " << (price1 + price2) << endl;

    if(club_card ==" Y" || club_card == "y"){
        discount = 0.90;
    } else {
        discount = 1.0;
    }

    if (price1 < price2) {
        discount_price = (price2 + (0.50 * price1)) * discount;
    } else {
        discount_price = (price1 + (0.50 * price2)) * discount;
    }
    total_price = discount_price * (1.0 + (tax_rate / 100.0));

    cout << "Price after discounts: " << discount_price <<endl;
    cout << "Total price: " << total_price << endl;

    return 0;
}