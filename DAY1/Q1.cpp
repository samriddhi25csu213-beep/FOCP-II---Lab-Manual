#include <iostream>
using namespace std;
int main(){
 float std1, std2, std3, avg;
 cout << "\nEnter marks of student 1: ";
    cin >> std1;
    cout << "\nEnter marks of student 2: ";
    cin >> std2;
    cout << "\nEnter marks of student 3: ";
    cin >> std3;


    avg = (std1 + std2 + std3)/3;
    cout << "\nThe avearge marks of the students are: " << avg;

    return 0;

 }
