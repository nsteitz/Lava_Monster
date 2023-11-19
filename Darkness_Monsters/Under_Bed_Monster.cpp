#include "Under_Bed_Monster.h"
using namespace std;

Under_Bed_Monster::Under_Bed_Monster() : Darkness_Monster() {
}

Under_Bed_Monster::Under_Bed_Monster(int noe) : Darkness_Monster(noe) {
}

// TODO: implement the scare method here*
string Under_Bed_Monster::scare() {
    //randomly retunes either grabs you or [number of eyes] is watching you
    int randNum = rand() % 10+1;
    if(randNum >5)
        return "*Grabs You";
    else
        return to_string(number_of_eyes) + " eyes is watching you";
}