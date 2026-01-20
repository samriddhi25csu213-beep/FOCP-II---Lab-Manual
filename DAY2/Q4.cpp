#include <iostream>
using namespace std;
int main(){

float item, quant, unitp, disc, amt, total;
cout << "enter item no.: ";
cin >> item;

cout << "enter quantity: ";
cin >> quant;

cout << "enter unit price: ";
cin >> unitp;

amt = quant*unitp;
disc = amt*0.2;
total = amt - disc;

cout << "TOTAL BILL: " << total; 
return 0;
}

