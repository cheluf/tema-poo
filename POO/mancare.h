//
// Created by Chelu Fabian on 07.12.2020.
//

#ifndef POO_MANCARE_H
#define POO_MANCARE_H
#include <iostream>
#include "produs.h"
#include <vector>

class mancare: public produs       // afisez ingredientele unui produs si costul acestora
{
   std::vector<produs> ing;
public:
    mancare() = default;

    ~mancare() override = default;

    mancare(std::string nume_produs, std::vector<produs> ingr);
    void afisare_produs() override;
};
#endif //POO_MANCARE_H
