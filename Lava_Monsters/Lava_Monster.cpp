//
// Created by Nathan Steitz on 10/2/23.
//

#include "Lava_Monster.h"

Lava_Monster::Lava_Monster() {
    number_people_burned = rand() % (MAX_PEOPLE_BURNED + 1);
}

Lava_Monster::Lava_Monster(int npb) {
    set_number_people_burned(npb);
}

int Lava_Monster::get_number_people_burned() const {
    return number_people_burned;
}

void Lava_Monster::set_number_people_burned(int npb) {
    if (npb < 0 || npb > MAX_PEOPLE_BURNED) {
        npb = MAX_PEOPLE_BURNED;
    }
    number_people_burned = npb;
}

void Lava_Monster::burn_person() {
    if (number_people_burned < MAX_PEOPLE_BURNED) {
        ++number_people_burned;
    }
}
