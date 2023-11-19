#include "Closet_Monster.h"
#include "Under_Bed_Monster.h"
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int main() {

     // TODO: Create a vector of Darkness Monster unique pointers and push a variety of ten Closet Monsters and Under Bed Monsters to it
     vector<unique_ptr<Darkness_Monster>> monsters;
    const int NUM_MONSTERS = 10;

    for (int i = 0; i < NUM_MONSTERS; ++i) {
        if (rand() % 2) {
            monsters.push_back(make_unique<Under_Bed_Monster>());
        } else {
            monsters.push_back(make_unique<Closet_Monster>());
        }
    }
     // TODO: Tell the user that there are monster eyes staring at them from the darkness!
     cout<<"There are monster eyes staring at you :)"<<endl;
     //TODO: Repeatedly give the user the option to poke the eyes or run away.
     string choice;
     while(choice != "r" && choice != "R") {
         cout << "Would you like to poke eyes or run away?" << endl;
         cout << "P to poke and R to run away: ";
         getline(cin, choice);
         //input validation
         while(choice != "r" && choice != "R" && choice == "P" && choice == "p"){
             cout<<"Invalid input ! Enter P or R: ";
             getline(cin, choice);
         }

//          - If they choose to poke the eyes, loop through the vector and call the poke_eye and
//          scare method on each monster. Output the scare method return values to the console.
         if(choice == "P" || choice == "p"){
             for(int i = 0; i < monsters.size(); i++){
                 string output;
                 monsters[i]->poke_eye();
                 output = monsters[i]->scare();
                 cout<<output<<endl;
                 }
         }
//              - Note: the calls to poke_eye are NOT polymorphism.
//              - Note: the calls to scare are polymorphism.
//          - If they choose to run away, the program ends.
     }

    return 0;
}

