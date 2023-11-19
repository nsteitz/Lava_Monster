//
// Created by Nathaniel Borrok-Hoffman on 10/3/23.
//

#ifndef MONSTERS_GORILLA_WITH_FIFTY_ARMS_H
#define MONSTERS_GORILLA_WITH_FIFTY_ARMS_H

#include "Woods_Monster.h"

class Gorilla_Monster : public Woods_Monster {
public:
    /**
     * Requires: nothing
     * Modifies: number_of_teeth
     * Effects: calls parent default constructor
     */
    Gorilla_Monster();

    /**
     * Requires: nothing
     * Modifies: number_of_teeth
     * Effects: calls parent non-default constructor
     */
    explicit Gorilla_Monster(int numTeeth);

    /**
     * Requires: nothing
     * Modifies: hiding_spot
     * Effects: randomly hides gorilla in a hiding spot
     */
    std::string hideGorilla();

    /**
  * Requires: nothing
  * Modifies: nothing
  * Effects: gorilla attacks you, you have a 2/5 chance of escaping,
     * if you don't escape print *you are dead*, otherwise prints *you have escaped the gorilla* ";
  */
    // std::string attack() override;

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: randomly returns *tree falls in front of you* or *gorilla snarls with [number_of_teeth]
     * fangs in your face".
     */
    std::string scare() override;

private:
    bool isHiding;
    // bool isHungry;
};


#endif //MONSTERS_GORILLA_WITH_FIFTY_ARMS_H
