// Bank System

#include <iostream>
using namespace std;

int main() {
    
    // Actual Balance
    double balance = 100.00;

    // Ask how much for transation
    double value;
    cout << "How much ? ";
    cin >> value;

    // Ask if wants Credit or Debit transaction
    char creditOrDebit; 
    cout << "Type C for Credit / Type D for Debit: ";
    cin >> creditOrDebit;

    // Balance Before
    cout << "Balance Before: " << balance << endl;

    // Validation of the input
    balance += creditOrDebit == 'C' ? value : -value;

    // Balance after the transaction
    cout << "Your balance: " << balance << endl;

    return 0;

}