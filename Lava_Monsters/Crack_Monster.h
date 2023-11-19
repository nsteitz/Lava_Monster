//
// Created by Nathan Steitz on 10/3/23.
//oozing

#ifndef MONSTERS_CRACK_MONSTER_H
#define MONSTERS_CRACK_MONSTER_H
#include "Lava_Monster.h"


class Crack_Monster : public Lava_Monster{
public:
    //default constructor
    Crack_Monster();

    //constructor when inputing ppl burned
    explicit Crack_Monster(int npb);

    //number of ppl swallowed the crack
    bool person_swallowed();

    //scare method that displays the quote from the harry potter character
    std::string scare() override;

protected:
    bool engulfed;

};


#endif //MONSTERS_CRACK_MONSTER_H
