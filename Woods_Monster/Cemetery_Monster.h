//
// Created by Nathaniel Borrok-Hoffman on 10/2/23.
//

#ifndef MONSTERS_CEMETERY_MONSTER_H
#define MONSTERS_CEMETERY_MONSTER_H

#include "Woods_Monster.h"

class Cemetery_Monster : public Woods_Monster {
public:
    /**
     * Requires: nothing
     * Modifies: number_of_teeth
     * Effects: calls parent default constructor and sets asked_riddle to false
     */
    Cemetery_Monster();

    /**
     * Requires: nothing
     * Modifies: number_of_teeth and sets asked_riddle to false
     * Effects: calls parent non-default constructor and sets asked_riddle to false
     */
    explicit Cemetery_Monster(int numTeeth);

    /**
     * Requires: nothing
     * Modifies: asked_riddle
     * Effects: reads in a riddle from a file, sets asked_riddle to true and returns riddle index
     */
    int askRiddle();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns asked_riddle;
     */
    bool isRiddleAsked();

    /**
     * Requires: riddle_index, answer
     * Modifies: answer_correct, asked_riddle
     * Effects: set asked_riddle to false, if answer_correct is true return true, else return false;
     */
    bool isCorrect(int riddle_index, std::string answer);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: prints you are dead and ends game";
     */
    std::string attack() override;

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: if isAskedRiddle() returns false, return some scary string explaining the riddles thing
     * else return *cackles*;
     */
    std::string scare() override;

protected:
    bool asked_riddle;
    bool is_correct;
};
#endif //MONSTERS_CEMETERY_MONSTER_H
