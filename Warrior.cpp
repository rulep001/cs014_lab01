#include <iostream>
#include <string>
#include "Warrior.h"
#include "Elf.h"
#include "Wizard.h"

using namespace std;

Warrior::Warrior(const string &name, double health, double attackStrength, string allegiance) : Character(WARRIOR, name, health, attackStrength) {
    this->allegiance = allegiance;
}

string Warrior::getAllegiance() {
    return allegiance;
}

void Warrior::attack(Character &opponent) {
    if (!opponent.isAlive()) {
        return;
    }
    
    if (opponent.getType() == WARRIOR) {
        Warrior &opp = dynamic_cast<Warrior &>(opponent);
        if (opp.allegiance == allegiance) {
            cout << "Warrior " << name << " does not attack Warrior "
                << opp.name << ".\nThey share an allegiance with "
                << allegiance << "." << endl;\
            return;
        }
    }
    
    double damageDone = (health / MAX_HEALTH) * attackStrength;
    opponent.setHealth(opponent.getHealth() - damageDone);
    cout << "Warrior " << name << " attacks " << opponent.getName() << " --- SLASH!!\n";
        
    if (opponent.isAlive()) {
        cout << opponent.getName() << " takes " << damageDone << " damage." << endl;
    }
    
    else {
        cout << opponent.getName() << " is dead!" << endl;
    }
}