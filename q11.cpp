#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price = 100, total;

    cout << "Enter quantity: ";
    cin >> quantity;

    total = quantity * price;

    if(quantity > 1000) {
        total = total - (0.10 * total);
    }

    cout << "Total expense: " << total << endl;

    return 0;
}
