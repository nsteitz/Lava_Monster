//
// Created by Nathan Steitz on 10/2/23.
//

#ifndef MONSTERS_ROCK_MONSTER_H
#define MONSTERS_ROCK_MONSTER_H
#include "Lava_Monster.h"
//have the person try and dodge the rocks that are thrown by either jumping or ducking and can use a struct

class Rock_Monster : public Lava_Monster{
public:

    /**
    * Requires: nothing
    * Modifies: number_people_burned and hit
    * Effects: calls parent default constructor and sets hit to false
    */
    Rock_Monster();

    /**
     * Requires: nothing
     * Modifies: number_people_burned and hit
     * Effects: calls parent non-default constructor and sets frozen to false
     */
    explicit Rock_Monster(int npb);



    /**
     * Requires: nothing
     * Modifies: hit
     * Effects: if hit is false, sets frozen to true and returns true.
     *          if hit is true, returns false.
     */
    bool person_hit();

    /**
     * Requires: Nothing
     * Modifies: hit
     * Effects: Makes a game where you have to dodge the flamming lava covered rock trown at
     * you by  the rock monster"
     */
    std::string scare() override;

protected:
    bool hit;



};


#endif //MONSTERS_ROCK_MONSTER_H
