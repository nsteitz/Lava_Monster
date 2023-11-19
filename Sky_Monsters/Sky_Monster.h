//
// Created by Nathan Steitz on 9/25/23.
//

#ifndef MONSTERS_SKY_MONSTER_H
#define MONSTERS_SKY_MONSTER_H
#include <string>


class Sky_Monster {
public:

    Sky_Monster();

    virtual ~Sky_Monster() = default;

    explicit Sky_Monster(int npe);

    virtual int get_number_of_wings() const;

    void set_number_of_wings(int npe);

    virtual void growth_spurt();

    virtual  std::string scare() = 0;

    static const int MAX_NUMBER_WINGS = 100;

protected:
    int number_of_wings;

};


#endif //MONSTERS_SKY_MONSTER_H
