#include <iostream>
using namespace std;
int main(){
    char choose;
    int num1, num2, add, sub, mul, div;
    cout << "CALCULATOR";

    cout << "CHOOSE (Y/N)";
    cin >> choose; 
    
    while (choose ="y"){
        cout << "enter number 1";  cin >> num1;
    cout << "enter number 2";  cin >> num2;
        add = num1 + num2;
        sub = num1 - num2;
        mul = num1*num2;
        div = num1/num2;
        cout << add;
        cout << sub;
        cout << mul;
        cout << div;

    }
    return 0; 
    


}
