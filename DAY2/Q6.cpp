#include <iostream>
using namespace std;
int main(){
    int num;
    char a[10];
    float sal, bonus, result;
    cout << "Enter the number of employees: ";
    cin >> num;

    for(int i = 0; i < num; i++){
        cout << "\nEnter employee name: ";
        cin >> a;
        cout << "Enter salary: ";
        cin >> sal;
        bonus = sal*0.12;
        result = sal + bonus;

        cout << "result salary: " << result;
        }
        return 0;

}
