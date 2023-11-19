//
// Created by Nathaniel Borrok-Hoffman on 10/4/23.
//

#include "Cemetery_Monster.h"
#include "Woods_Monster.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;
Cemetery_Monster::Cemetery_Monster(): Woods_Monster(), asked_riddle(false){
}

/**
 * Requires: nothing
 * Modifies: number_of_teeth and sets asked_riddle to false
 * Effects: calls parent non-default constructor and sets asked_riddle to false
 */
 Cemetery_Monster::Cemetery_Monster(int numTeeth): Woods_Monster(numTeeth), asked_riddle(false) {
}

/**
 * Requires: nothing
 * Modifies: asked_riddle
 * Effects: reads in a riddle from a file, sets asked_riddle to true and returns the riddle
 */
int Cemetery_Monster::askRiddle() {
    vector<string> riddles;
    ifstream fRiddles;
    fRiddles.open("../riddles.txt");
    if (!fRiddles.is_open())
        cout << "HERE'S A RIDDLE: why is the file not open";
    string line;
    while (fRiddles && fRiddles.peek() != EOF) {
        getline(fRiddles, line);
        riddles.push_back(line);
    }
    fRiddles.close();

    srand(time(NULL));
    int riddle_index = rand() % riddles.size();

    std::string riddle = riddles[riddle_index];
    cout << riddle << endl;
    asked_riddle = true;
    return riddle_index;
}

/**
 * Requires: nothing
 * Modifies: nothing
 * Effects: returns asked_riddle;
 */
bool Cemetery_Monster::isRiddleAsked(){
    return asked_riddle;
}

/**
 * Requires: nothing
 * Modifies: answer_correct, asked_riddle
 * Effects: set asked_riddle to false, if answer_correct is true return true, else return false;
 */
bool Cemetery_Monster::isCorrect( int riddle_index, string answer){
    asked_riddle = false;
    bool answer_correct = false;
    if (riddle_index == 0){
        if (answer == "c"){
            answer_correct = true;
        }
    }
    else if (riddle_index == 1){
        if (answer == "b"){
            answer_correct = true;
        }
    }
    else if (riddle_index == 2){
        if (answer == "b"){
            answer_correct = true;
        }
    }
    //determine if answer is correct
    return answer_correct;
}

/**
 * Requires: nothing
 * Modifies: nothing
 * Effects: returns you are dead and ends game";
 */
std::string Cemetery_Monster::attack() {
    std::string attack = "You are dead";
    return attack;
}

/**
 * Requires: nothing
 * Modifies: nothing
 * Effects: if isAskedRiddle() returns false, return some scary string explaining the riddles thing
 * else return *cackles*;
 */
std::string Cemetery_Monster::scare() {
    bool riddle_status = isRiddleAsked();
    std::string scary_string;
    if (riddle_status == false){
        scary_string = "My name is riddles John and I am the keeper of this cemetery. If you want to get out of here alive "
                       "you must answer my riddles. ";
    }
    else scary_string = "*cackles*";

    return scary_string;
}
