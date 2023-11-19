//
// Created by Nathaniel Borrok-Hoffman on 10/3/23.
//

#ifndef MONSTERS_WOODS_MONSTER_H
#define MONSTERS_WOODS_MONSTER_H

#include <string>
class Woods_Monster {

public:
    /**
     * Requires: nothing
     * Modifies: number_of_teeth
     * Effects: sets number_of_teeth to random number between 1-100, sets watching you to true
     */
    Woods_Monster();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: does nothing
     */
    virtual ~Woods_Monster() = default;

    /**
     * Requires: nothing
     * Modifies: number_people_eaten
     * Effects: calls setNumberOfTeeth, calls, sets watching you to true
     */
    explicit Woods_Monster(int numTeeth);

    /**
     * Requires: numTeeth
     * Modifies: number_of_teeth
     * Effects: sets number_of_teeth to num
     */
    void setNumberOfTeeth(int numTeeth);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns number_of_teeth
     */
    virtual int getNumberOfTeeth() const;

    // pure virtual function for a woods monster attacking the character
    virtual std::string attack() = 0;

    // pure virtual function for printing the number of teeth
    //void printNumberOfTeeth() = 0;

    /**
     * Requires: nothing
     * Modifies: number_of_teeth
     * Effects: randomly changes number of teeth to a multiple of 3 less than the origninal number
     * and returns true, or
     * returns false and prints string "your hand was bitten off"
     */
    virtual bool punchMouth();

    // pure virtual method to return a scary string
    virtual std::string scare() = 0;

    static const int MAX_NUMBER_OF_TEETH = 100;
protected:
    int number_of_teeth;
    bool is_watching_you;
};

#endif //MONSTERS_WOODS_MONSTER_H
