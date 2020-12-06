//
// Created by Chelu Fabian on 01.12.2020.
//

#include "ospatar.h"
#include <iostream>
using namespace std;

ospatar::ospatar(const string nume_ospatar,const int id_angajat){
    this-> nume_ospatar= nume_ospatar;
    this-> id_angajat= id_angajat;
}

string ospatar::getOspatar() const{
    return nume_ospatar;
}

ospatar::ospatar(ospatar& osp)
{
    this->nume_ospatar=osp.nume_ospatar;
    this->id_angajat=osp.id_angajat;
}

ostream& operator<<(ostream& out,ospatar& osp)
{
    out<<"Ospatar:" << osp.nume_ospatar << " || " << "ID:" << osp.id_angajat << endl;
    return out;
}

