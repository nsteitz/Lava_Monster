//
// Created by Nathaniel Borrok-Hoffman on 10/3/23.
//

#include "Woods_Monster.h"
#include <iostream>

Woods_Monster::Woods_Monster() {
    number_of_teeth = rand() % (MAX_NUMBER_OF_TEETH - 1) + 2;
    is_watching_you = true;
}

Woods_Monster::Woods_Monster(int numTeeth) {
    number_of_teeth = numTeeth;
    is_watching_you = true;
}

int Woods_Monster::getNumberOfTeeth() const {
    return number_of_teeth;
}

void Woods_Monster::setNumberOfTeeth(int numTeeth) {
    number_of_teeth = numTeeth;
}

bool Woods_Monster::punchMouth() {
    int originalTeeth = number_of_teeth;
    int random = std::rand() % 3;
    if (random == 0 || random == 1){
        std::cout << "You lost your hand" << std::endl;
        return false;
    }
    else {

        int teethChange = 1 + std::rand() % (number_of_teeth - 1 + 1);
        int newNumberTeeth = teethChange * 3;
        setNumberOfTeeth(newNumberTeeth);
        return true;
    }
}