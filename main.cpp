#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
// characterAGEM --------------------------------------------------------------------------------------------------
    // Crianção do characteragem
    const string nomecharacter1 = "ByNocturne";


    // Manutenção do characteragem
    short int characterLife = 100;
    short characterLvl = 1;
    const float constUpLvl = 0.3;

// COMBAT -----------------------------------------------------------------------------------------------------

    // Attacker
    string character1 = "ByNocturne";
    int character1Atk = 11;
    unsigned short int character1Lvl = 3;
    int character1Life = 400;

    // Defensor
    string character2 = "Charu87";
    int character2Armor = 5;
    unsigned short int character2Lvl = 4;
    int character2Life = 14;

    // Calculation for damage applied to defender
    double finalDamage = ((character1Atk * character1Lvl) - (character2Armor * character2Lvl));

    // See the damage
    cout << "The final damage is: " << finalDamage << endl;

    // Set if the character is Alive or Dead
    if(character2Life <= finalDamage) {

        cout << "" << character2 << " is dead!\n";

    }
    else {

        cout << "" << character2 << " is Alive\n";

    }

// BANCO ------------------------------------------------------------------------------------------------------

    // Balanço atual
    double balance = 100.00;

    // Pergunta quanto quer depositar ou creditar
    double value;
    cout << "How much ? ";
    cin >> value;

    // Pergunta se quer depositar ou creditar
    char creditOrDebit; 
    cout << "Type C for Credit / Type D for Debit: ";
    cin >> creditOrDebit;

    // Balanço antes
    cout << "Balance Before: " << balance << endl;

    // Verificação se vai ser crédito, caso contrário será débito
    balance += creditOrDebit == 'C' ? value : -value;

    // Balanço atual
    cout << "Your balance: " << balance << endl;

    return 0;
}