//
// Created by Chelu Fabian on 07.12.2020.
//

#include "mancare.h"
#include <iostream>
#include <vector>

mancare::mancare(std::string nume_produs,std::vector<produs> ingr)
{
    this->nume_produs=nume_produs;
this->ing = ingr;
}


void mancare::afisare_produs()
{
std::cout << nume_produs << std::endl;
std::cout << "Ingrediente:" << std::endl;
int i;
for( i=0; i < ing.size() ; i ++ )
{
std::cout<< ing[i];
}
ing.clear();
}
