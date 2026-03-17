include <iostream>
using namespace std;

int main(){

    int n, num, largest;

    cout << "Enter number of entries: " << endl;
    cin >> n;

    cout << "Enter number: " << endl;
    cin >> num;

    largest = num;   

    for (int i = 2; i <= n; i++){

        cout << "Enter number: " << endl;
        cin >> num;

        if (num > largest){
            
            largest = num;
        }
    }

    cout << "Largest number is: " << largest << endl;

    return 0;
}
