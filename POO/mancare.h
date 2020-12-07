//
// Created by Chelu Fabian on 07.12.2020.
//

#ifndef POO_MANCARE_H
#define POO_MANCARE_H
#include <iostream>
#include "produs.h"
#include <vector>

class mancare: public produs
{
   std::vector <std::string> ing;
public:
    mancare() = default;
    ~mancare()=default;
    mancare(std::string nume_produs,std::vector<std::string> ingr);
    void afisare_produs() override;
};
#endif //POO_MANCARE_H
