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
    mancare(std::vector<std::string> ingr)
    {
        this->ing = ingr;
    }
    ~mancare()=default;
    void afisare_produs() override{
        std::cout<< nume_produs<<' '<<pret_produs << cod_produs;
        int i;
        int size;
        size= ing.size();
        for(i=0; i < size ; i ++)
        {
            std::cout<< ing[i];
        }
    }
};
#endif //POO_MANCARE_H
