// System Combat

#include <iostream>
#include <cstdio>

using namespace std;

int main() {

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
    character2Life -= finalDamage;

    // See the damage
    cout << "The final damage is: " << finalDamage << endl;

    // Set if the character is Alive or Dead
    if(character2Life <= finalDamage) {

        cout << "" << character2 << " is dead!\n";

    }
    else {

        cout << "" << character2 << " is Alive\n";

    }

    // Show the Defensor life

    cout << "Defensor life is: " << character2Life << endl;

    return 0;
}