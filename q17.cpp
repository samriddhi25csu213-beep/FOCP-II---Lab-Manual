#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, temp, r;

    cin >> n;

    temp = n;
    while(temp > 0) {
        r = temp % 10;
        sum += pow(r, 3);
        temp /= 10;
    }

    if(sum == n)
        cout << "Armstrong\n";
    sum = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        cout << "Perfect";

    return 0;
}
