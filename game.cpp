#include<iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Welcome to my game 'by:yousef'" << endl;
    cout << "It is played by two people with a pile of coins (or other tokens) between them. The players take turns removing coins from the pile, always removing a non-zero square number of coins (1, 4, 9, 16, …). The \
player who removes the last coin wins." << endl;
    int coins, x, player1, player2;
    cout << "please enter the number of coin :";
    cin >> coins;
    while (coins > 0) {
        cout << "player1 : please  enter the number of coins you want to remove :" << endl;
        cin >> player1;
        while (true) {
            if (player1 >= coins || player1 < 0) {
                if (coins==1 &&player1==1)
                {
                    break;
                }
                else {
                    cout
                            << "Erorr coins you want to remove it must be less than  total coins and coins must be greater than 0";
                    cout << "player1 : please  enter the number of coins you want to remove :" << endl;
                    cin >> player1;
                }
            } else
                break;
        }
        while (x != 5) {
            for (int i = 0; i < coins; i++) {
                if (player1 == pow(i, 2)||player1==1) {
                    x = 5;
                    break;
                } else
                    x = 7;
            }
                if (x == 7) {
                    cout << "coins from the pile, always removing a non-zero square number of coins (1, 4, 9, 16, …)."
                         << endl;
                    cout << "player1 : please  enter the number of coins you want to remove :" << endl;
                    cin >> player1;
                } else
                    break;
            }
        coins -= player1;
        cout << "Remaining coins :" << coins << endl;
        if (coins == 0) {
            cout << "player1 is win " << endl;
            break;
        }
        cout << "player2 : please  enter the number of coins you want to remove :" << endl;
        cin >> player2;
        while (true) {
            if (player2 >= coins || player2 < 0) {
                if (coins==1 &&player1==1)
                {
                    break;
                }
                else {
                    cout
                            << "Erorr coins you want to remove it must be less than  total coins and coins must be greater than 0";
                    cout << "player2 : please  enter the number of coins you want to remove :" << endl;
                    cin >> player2;
                }
            } else
                break;
        }
// The next loop to know whether this number is a square currency or not
        x = 0;
        while (x != 5) {
            for (int i = 0; i < coins; i++) {
                if (player2 == pow(i, 2)||player2==1) {
                    x = 5;
                    break;
                } else
                    x = 7;
            }
           if (x == 7) {
                    cout << "coins from the pile, always removing a non-zero square number of coins (1, 4, 9, 16, …)."<< endl;
                    cout << "player2 : please  enter the number of coins you want to remove :" << endl;
                    cin >> player2;
                } else
                    break;
            }
            coins -= player2;
    cout << "Remaining coins :" << coins << endl;
    if (coins == 0) {
        cout << "player2 is win " << endl;
        break;
            }
        }
}
