//
// Created by Chelu Fabian on 04.12.2020.
//

#ifndef POO_NOTE_H
#define POO_NOTE_H
#include <iostream>
#include <vector>
#include "ospatar.h"

class note : public ospatar{
    std::vector <int> nt;
public:
    note() = default;
    ~note()= default;
    note(std::vector <int> note,ospatar);
    float nota_ospatar(ospatar);
};
#endif //POO_NOTE_H
