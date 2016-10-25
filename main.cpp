// Ryan Ulep and Michael Pare

#include <iostream>
#include <string>
#include <ctime>
#include <list>
#include <algorithm>

using namespace std;

#include "Warrior.h"
#include "Elf.h"
#include "Wizard.h"

void battle_sequence(list<Character *> player1, list<Character *> player2);

int main() {

    cout << "-----WELCOME TO THE BATTLE!-----" << endl;
    cout << "Each player creates a team of 6 with an attack strength " << endl
        << "less than 30. Battle it out until one is victorious!" << endl << endl;
    
    list<Character *> player1;
    list<Character *> player2;
    
    string p1name1, p1name2, p1name3, p1name4, p1name5, p1name6;
    double p1strength1, p1strength2, p1strength3, p1strength4, p1strength5, p1strength6;
    
    string p2name1, p2name2, p2name3, p2name4, p2name5, p2name6;
    double p2strength1, p2strength2, p2strength3, p2strength4, p2strength5, p2strength6;
    
    double player1_strength = 0;
    double player2_strength = 0;
    
    
    cout << "PLAYER 1: Create your team of 2 Warriors, 2 Elfs, and 2 Wizards." << endl;
    cout << "Name and attack strength of Warrior 1: ";
    cin >> p1name1;
    
    do {
    cin >> p1strength1;
    player1_strength += p1strength1;
        if (player1_strength > 50) {
            cout << "Please enter a smaller strength value." << endl;
            player1_strength -= p1strength1;
        }
    }
    while (player1_strength > 50);
    
    
    cout << "Name and attack strength of Warrior 2: ";
    cin >> p1name2;
    
    do {
    cin >> p1strength2;
    player1_strength += p1strength2;
        if (player1_strength > 50) {
        cout << "Please enter a smaller strength value." << endl;
        player1_strength -= p1strength2;
        }
    }
    while (player1_strength > 50);
    
    cout << "Name and attack strength of Wizard 1: ";
    cin >> p1name3;
    
    do {
    cin >> p1strength3;
    player1_strength += p1strength3;
    if (player1_strength > 50) {
        cout << "Please enter a smaller strength value." << endl;
        player1_strength -= p1strength3;
    }
    }
    while (player1_strength > 50);
    
    cout << "Name and attack strength of Wizard 2: ";
    cin >> p1name4;
    
    do {
    cin >> p1strength4;
    player1_strength += p1strength4;
    if (player1_strength > 50) {
        cout << "Please enter a smaller strength value." << endl;
        player1_strength -= p1strength4;
    }
    }
    while (player1_strength > 50);
    
    cout << "Name and attack strength of Elf 1: ";
    cin >> p1name5;
    
    do {
    cin >> p1strength5;
    player1_strength += p1strength5;
    if (player1_strength > 50) {
        cout << "Please enter a smaller strength value." << endl;
        player1_strength -= p1strength5;
    }
    }
    while (player1_strength > 50);
    
    cout << "Name and attack strength of Elf 2: ";
    cin >> p1name6;
    
    do {
    cin >> p1strength6;
    player1_strength += p1strength6;
    if (player1_strength > 50) {
        cout << "Please enter a smaller strength value." << endl;
        player1_strength -= p1strength6;
    }
    }
    while (player1_strength > 50); 
    
    player1.push_back(new Warrior(p1name1, 100, p1strength1, "p1"));
    player1.push_back(new Warrior(p1name2, 100, p1strength2, "p1"));
    player1.push_back(new Wizard(p1name3, 100, p1strength3, rand() % 50 + 1));
    player1.push_back(new Wizard(p1name4, 100, p1strength4, rand() % 50 + 1));
    player1.push_back(new Elf(p1name5, 100, p1strength5, "p1"));
    player1.push_back(new Elf(p1name6, 100, p1strength6, "p1"));
    
    
    
    cout << "PLAYER 2: Create your team of 2 Warriors, 2 Elfs, and 2 Wizards." << endl;
    cout << "Name and attack strength of Warrior 1: ";
    cin >> p2name1;
    
    do {
    cin >> p2strength1;
    player2_strength += p2strength1;
        if (player2_strength > 50) {
            cout << "Please enter a smaller strength value." << endl;
            player2_strength -= p2strength1;
        }
    }
    while (player2_strength > 50);
    
    
    cout << "Name and attack strength of Warrior 2: ";
    cin >> p2name2;
    
    do {
    cin >> p2strength2;
    player2_strength += p2strength2;
        if (player2_strength > 50) {
        cout << "Please enter a smaller strength value." << endl;
        player2_strength -= p2strength2;
        }
    }
    while (player2_strength > 50);
    
    cout << "Name and attack strength of Wizard 1: ";
    cin >> p2name3;
    
    do {
    cin >> p2strength3;
    player2_strength += p2strength3;
    if (player2_strength > 50) {
        cout << "Please enter a smaller strength value." << endl;
        player2_strength -= p2strength3;
    }
    }
    while (player2_strength > 50);
    
    cout << "Name and attack strength of Wizard 2: ";
    cin >> p2name4;
    
    do {
    cin >> p2strength4;
    player2_strength += p2strength4;
    if (player2_strength > 50) {
        cout << "Please enter a smaller strength value." << endl;
        player2_strength -= p2strength4;
    }
    }
    while (player2_strength > 50);
    
    cout << "Name and attack strength of Elf 1: ";
    cin >> p2name5;
    
    do {
    cin >> p2strength5;
    player2_strength += p2strength5;
    if (player2_strength > 50) {
        cout << "Please enter a smaller strength value." << endl;
        player2_strength -= p2strength5;
    }
    }
    while (player2_strength > 50);
    
    cout << "Name and attack strength of Elf 2: ";
    cin >> p2name6;
    
    do {
    cin >> p2strength6;
    player2_strength += p1strength6;
    if (player2_strength > 50) {
        cout << "Please enter a smaller strength value." << endl;
        player2_strength -= p2strength6;
    }
    }
    while (player2_strength > 50); 
    
    player2.push_back(new Warrior(p2name1, 100, p2strength1, "p1"));
    player2.push_back(new Warrior(p2name2, 100, p2strength2, "p1"));
    player2.push_back(new Wizard(p2name3, 100, p2strength3, rand() % 50 + 1));
    player2.push_back(new Wizard(p2name4, 100, p2strength4, rand() % 50 + 1));
    player2.push_back(new Elf(p2name5, 100, p2strength5, "p1"));
    player2.push_back(new Elf(p2name6, 100, p2strength6, "p1"));
    
    battle_sequence(player1, player2);
    
    if (player1.empty()) {
        cout << "Player 2 wins!" << endl;
    }
    else {
        cout << "Player 1 wins!" << endl;
    }

    return 0;
}

void battle_sequence(list<Character *> player1, list<Character *> player2) {
    
    while (!player1.empty() && !player2.empty()) {
        for (list<Character*>::iterator it1 = player1.begin(); it1 != player1.end(); ) {
            list<Character*>::iterator it2 = player2.begin();
            if (it2 != player2.end()) {
                (*it1)->attack(**it2);
                (*it2)->attack(**it1);
                
                if (!(*it1)->isAlive()) {
                    it1 = player1.erase(it1);
                }
                else {
                    ++it1;
                }
                if (!(*it2)->isAlive()) {
                    it2 = player2.erase(it2);
                }
                else {
                    ++it2;
                }
            }
        }
    }
    return;
}