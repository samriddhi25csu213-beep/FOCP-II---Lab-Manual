#include <iostream>
using namespace std;
int main(){
 int ply1, ply2, ply3, avg;
 cout << "\nEnter score of first palayer: ";
    cin >> ply1;
    cout << "\nEnter score of second player: ";
    cin >> ply2;
    cout << "\nEnter score of third player: ";
    cin >> ply3;

    if (ply1 > ply2 && ply1 > ply3){
        cout << "WINNER: PLAYER1";
    }
    else if (ply2 > ply1 && ply2 > ply3){
        cout << "WINNER: PLAYER2";
    }
    else if (ply3 > ply2 && ply3 > ply1){
        cout << "WINNER: PLAYER3";
    }
    else{
        cout << "IT IS A TIEE!!";
    }

    return 0;

 }
