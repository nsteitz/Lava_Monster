//
// Created by Nathan Steitz on 10/2/23.
//

#include "Rock_Monster.h"
#include "Crack_Monster.h"
#include <iomanip>
#include "iostream"
#include <string>

using namespace std;

int Lava_Monster_Main() {
    //monster classes
    Rock_Monster rockMonster;
    Crack_Monster crackMonster;
    //tracks the numbers of lives that you have left
    int lives = 3;
    string result;
    bool alive = true;

    //print out dialogue
    cout<<"So you get to walking down elm street, but you can't shake this eerie feeling"<<endl;
    while(alive) {
        result = "";
        //randomly choose which monster to face
        srand(time(NULL));
        int randNum = rand() % 10;
        if (randNum > 5) {
            cout << "OH NO ! Do you hear that" << endl;
            for (int i = 0; i < 50; i++) {
                cout << "RUMBLE ";
                if (i % 10 == 0)
                    cout << endl;
            }
            cout << endl;
            //create dialogue for monsters creation
            cout << "Crikey, it looks like you awoken the Molten Rock monster, cousin of the lava monster" << endl;
            cout << "Grrrrrrrrr" << endl;
            cout
                    << "WOW did you hear that roar it sounds angry, on no whats it doing with that flaming molten rock in its hand"
                    << endl;
            //create a loop for 3 times so if you loose you don't make it
            for (int i = 0; i < 3; i++) {
                result = rockMonster.scare();
                if (result == "NO") {
                    lives--;
                }
                if (lives > 1)
                    alive = false;
            }
        } else {
            for (int i = 0; i < 50; i++) {
                cout << "Crack ";
                if (i % 10 == 0)
                    cout << endl;
            }
            cout << endl;
            //print the crack monster
            cout << "OOOZING from the depths of the Earth, a molten object crawls up from the crack in the ground"
                 << endl;
            cout
                    << "It says hey there chief, you ready to play a game. If you guess all three Harry Potter Quotes correctly, I'll let you live"
                    << endl;
            //have to guess three quotes correctly
            for (int i = 0; i < 3; i++) {
                result = crackMonster.scare();
                if(result == "NO"){
                    lives -= 3;
                    alive = false;
                }

            }
        }

        //end while loop
        alive = false;
    }

    //check if user has survived or failed
    if(lives > 0)
        alive = true;
    if(alive){
        cout<<"YOU WIN, NO DEATH THIS TIME" << endl;
        return 1;
    }
    else{
        cout << "Sorry but I must keep my promise" << endl;
        return 0;
    }


//

}