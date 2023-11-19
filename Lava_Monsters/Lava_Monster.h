//
// Created by Nathan Steitz on 10/2/23.
//
//idea- instead of a playabel game make it like a new story
// also have a game where tey have to guess rigt number or fall into hte crack
#ifndef MONSTERS_LAVA_MONSTER_H
#define MONSTERS_LAVA_MONSTER_H

#include <string>
class Lava_Monster {

public:
    /**
     * Requires: nothing
     * Modifies: number_people_eaten
     * Effects: sets number_people_eaten to random int in range 0-100
     */
    Lava_Monster();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: does nothing
     */
    virtual ~Lava_Monster() = default;

    /**
     * Requires: nothing
     * Modifies: number_people_eaten
     * Effects: calls set_number_people_burned with npb
     */
    explicit Lava_Monster(int npb);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns number_people_burned
     */
    virtual int get_number_people_burned() const;

    /**
     * Requires: nothing
     * Modifies: number_people_burned
     * Effects: sets number_people_eaten to npb if npb is in range
     *          0-100. Otherwise sets number_people_burned to 100.
     */
    void set_number_people_burned(int npb);

    /**
     * Requires: nothing
     * Modifies: number_people_burned
     * Effects: increments number_people_burned by one if not already at 100
     */
    virtual void burn_person();

    // pure virtual method to return a scary string
    //maybe change this to read in a file of lava saying/memes to display when playing
    virtual std::string scare() = 0;

    static const int MAX_PEOPLE_BURNED = 100;
protected:
    int number_people_burned;
};




#endif //MONSTERS_LAVA_MONSTER_H
