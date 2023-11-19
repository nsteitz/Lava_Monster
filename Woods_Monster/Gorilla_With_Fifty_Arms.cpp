//
// Created by Nathaniel Borrok-Hoffman on 10/7/23.
//
#include "Gorilla_With_Fifty_Arms.h"
#include <vector>

/**
 * Requires: nothing
 * Modifies: number_of_teeth
 * Effects: calls parent default constructor
 */
Gorilla_Monster::Gorilla_Monster(): Woods_Monster(){
}

/**
 * Requires: nothing
 * Modifies: number_of_teeth
 * Effects: calls parent non-default constructor
 */
Gorilla_Monster::Gorilla_Monster(int numTeeth): Woods_Monster(numTeeth) {
}

/**
 * Requires: nothing
 * Modifies: hiding_spot
 * Effects: randomly hides gorilla in a hiding spot
 */
std::string Gorilla_Monster::hideGorilla(){
    int hidingSpotsIndex = rand() % 3;
    std::vector<std::string> hidingSpots{"Behind the tree", "Behind the boulder", "In the tall grass"};
    std::string hidingSpot = hidingSpots[hidingSpotsIndex];
    return hidingSpot;
}


/**
* Requires: nothing
* Modifies: nothing
* Effects: gorilla attacks you, you have a 1/5 chance of escaping,
 * if you don't escape print *you are dead*, otherwise prints *you have escaped the gorilla* ";
*/
//std::string Gorilla_Monster::attack() {
//    int
//}


/**
 * Requires: nothing
 * Modifies: nothing
 * Effects: randomly returns *tree falls in front of you* or *gorilla snarls with [number_of_teeth]
 * fangs in your face".
 */
std::string Gorilla_Monster::scare() {
    int numTeeth = std::rand() % 100; // Generate a random number of teeth
    int randomChoice = std::rand() % 2; // Generate 0 or 1 randomly
    if (randomChoice == 0) {
        return "tree falls in front of you";
    } else {
        return "gorilla snarls with " + std::to_string(numTeeth) + " fangs in your face";
    }
}
