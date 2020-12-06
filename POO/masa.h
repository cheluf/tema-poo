//
// Created by Chelu Fabian on 01.12.2020.
//

#ifndef POO_MASA_H
#define POO_MASA_H
#include <iostream>
#include <vector>
#include "produs.h"
#include "ospatar.h"


class masa{

int nrmasa;
int persoane;
int nr_produse;
std::vector <produs> produse;

public:
masa() = default;
masa(const int,const int,const int,std::vector <produs> produsele);
void nota_de_plata(ospatar);
void cadou(double);
masa(masa& masa);
~masa()=default;
friend std::ostream& operator<<(std::ostream& ost, masa& ms);
friend masa operator+(masa&,produs&);

};

#endif //POO_MASA_H
