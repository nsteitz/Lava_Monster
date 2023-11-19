//
// Created by Nathaniel Borrok-Hoffman on 10/2/23.
//

#include <iostream>
#include "Cemetery_Monster.h"
#include "Woods_Monster.h"
#include "Gorilla_With_Fifty_Arms.h"

using namespace std;

int cemeteryPath(bool playerAlive){
    string choice;
    Cemetery_Monster riddles_john(25);
    cout << riddles_john.scare() << endl;
    cout << "(a) answer riddle \n"
            "(b) punch mouth" << endl;
    getline(cin, choice);
    if (choice == "a"){
        int riddle = riddles_john.askRiddle();
        string answer;
        if (riddle == 0){
            cout << "(a) door one \n(b) door two \n(c) door three" << endl;
            getline(cin, answer);
            if (riddles_john.isCorrect(riddle, answer) == false){
                riddles_john.attack();
                playerAlive = false;
            }
            else if (riddles_john.isCorrect(riddle, answer) == true){
                cout << "You are safe, for now... you may pass" << endl;
                riddles_john.scare();
            }
        }
        if (riddle == 1){
            cout << "(a) Which is the correct door? \n(b) Which door would your brother say to choose? \n(c) Which one of you is lying?" << endl;
            getline(cin, answer);
            if (riddles_john.isCorrect(riddle, answer) == false){
                riddles_john.attack();
                playerAlive = false;
            }
            else if (riddles_john.isCorrect(riddle, answer) == true){
                cout << "You are safe, for now... you may pass" << endl;
                riddles_john.scare();
            }
        }
        if (riddle == 2){
            cout << "(a) Your car \n(b) Your name \n(c) Your eyes" << endl;
            getline(cin, answer);
            if (riddles_john.isCorrect(riddle, answer) == false){
                riddles_john.attack();
                playerAlive = false;
            }
            else if (riddles_john.isCorrect(riddle, answer) == true){
                cout << "You are safe, for now... you may pass" << endl;
                riddles_john.scare();
                playerAlive = true;
            }

        }
    }
    else if (choice == "b") {
        bool punchResult = riddles_john.punchMouth();
        if (punchResult == true){
            cout << "You have escaped Riddles John";
            playerAlive = true;
        }
        else playerAlive = false;
    }
    int playerSurvive;
    if (playerAlive == true)
        playerSurvive = 1;
    if (playerAlive == false)
        playerSurvive = 0;
    return playerSurvive;
}

int woodsMain( bool playerAlive ){
    int playerSurvive = 0;
    string path;
    cout<< "You have chosen to cut through Centennial Forrest. You know these woods are supposed to be haunted\n "
                "but you don't care. Anything in there can't be more terrifying than what you'll face if you\n "
                "return home empty handed." << endl;
    cout << "The woods are dense, there's no way sound could penetrate through the thick leafs. \nThere are two paths through." << endl;
    cout << "(a) you can go through the cemetery \n (b) you can go through the cave with a skull over it" << endl;
    getline(cin, path);
    if (path == "a") {
        playerSurvive = cemeteryPath(playerAlive);
    }
    else if (path == "b"){
        cout << "You tripped and fell on a rock and broke your neck" << endl;
        playerSurvive = 0;
    }
    return playerSurvive;
}
