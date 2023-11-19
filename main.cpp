//
// Created by Nathan Steitz on 10/7/23.
//
//#include "Lava_Monsters/Lava_Monster.h"
#include "Lava_Monsters/Rock_Monster.h"
#include "Lava_Monsters/Crack_Monster.h"
#include "Woods_Monster/Woods_Monster.h"
#include <iostream>

using namespace std;
bool woodsMain(bool alive);
int Lava_Monster_Main();

int main(){
    //variable to see if player lives
    int playerSurvive;
    bool playerAlive = true;
    string choice;
    cout << "Your mom is calling you from upstairs, she says you need to pickup milk from the store. "
            "Enter 1 to play, enter anything else for instant death: ";
    getline(cin, choice);
    if (choice != "1") {
        playerAlive = false;
        cout << "You are dead" << endl;
    }
    while (playerAlive) {
        string path;
        cout <<"You leave the house to go to the grocery store. You don't have a car so you have to walk. "
               "There are 3 ways to get the the store, \nall of them are equal in length. You can \n(a) choose to take elm "
               "street, \n(b) choose to cut through Centennial Forrest, or \n(d) take the bus." << endl;
        cout << "Enter your choice: ";
        getline(cin, path);
        while(path != "a" && path != "b" && path != "d" ){
            cout << "Invalid choice, please enter a , b, or d" << endl;
            getline(cin, path);
        }


        if (path == "a") {
            playerSurvive = Lava_Monster_Main();
        }
        else if (path == "b") {
            playerSurvive = woodsMain(playerAlive);
        }
        else playerAlive = false;

        if(playerSurvive == 0 || playerAlive==false){
            playerAlive = false;
            cout << "You have succumb to the monsters. You never truly had any hope to begin with.";
        }
        if (playerSurvive == 1){
            playerAlive = true;
            cout <<"YOU WIN!!! You were able to defeat the monsters and get milk from the store. ";
            playerAlive=false;
        }

    }
    return 0;
}
