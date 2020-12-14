//
// Created by Chelu Fabian on 07.12.2020.
//

#include "mancare.h"
#include <iostream>
#include <vector>

mancare::mancare(std::string nume_produs, std::vector<produs> ingr) :
        produs(nume_produs, 1, 1)
{
this->ing = ingr;
}


void mancare::afisare_produs() {
    std::cout << "************************" << std::endl;
    produs::afisare_produs();
    std::cout << nume_produs << std::endl;
    std::cout << "Ingrediente:" << std::endl;
    int i;
    for (i = 0; i < ing.size(); i++) {
        std::cout << "\t" << ing[i];
    }
    std::cout << "************************";
    ing.clear();
}
