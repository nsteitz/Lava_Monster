//
// Created by Nathan Steitz on 9/25/23.
//
#include "Sky_Monster.h"

Sky_Monster::Sky_Monster(){
    number_of_wings = rand() % (MAX_NUMBER_WINGS-1)+2;
}

Sky_Monster::Sky_Monster(int npe){
    set_number_of_wings(npe);
}


int Sky_Monster::get_number_of_wings() const{
    return number_of_wings;
}

void Sky_Monster::set_number_of_wings(int npe){
    if(npe < 2 || npe > MAX_NUMBER_WINGS || npe % 2 != 0){
        npe = MAX_NUMBER_WINGS;
    }
    number_of_wings = npe;
}

void Sky_Monster::growth_spurt(){
    if (number_of_wings < MAX_NUMBER_WINGS) {
        ++number_of_wings;
        ++number_of_wings;
    }
}



#include "Sky_Monster.h"
