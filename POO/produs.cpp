//
// Created by Chelu Fabian on 01.12.2020.
//

#include "produs.h"
using namespace std;

ostream& operator<<(ostream& out, const produs& abc)
{
    out<< "Produs:"<< abc.nume_produs << " || " <<"Pret:" << abc.pret_produs << " || " << "ID:" << abc.cod_produs<<endl;
    return out;
}

produs::produs(const string nume_produs, const double pret_produs ,const int cod_produs) {

    this->nume_produs = nume_produs;
    this->pret_produs = pret_produs;
    this->cod_produs = cod_produs;
}

int produs::getCod(){
    return cod_produs;
}

string produs::getNume(){
    return nume_produs;
}

double produs::getPret(){
    return pret_produs;
}
produs &produs::operator=(const produs &prod) {
    this->nume_produs = prod.nume_produs;            // op =
    this->pret_produs = prod.pret_produs;
    this->cod_produs = prod.cod_produs;
    return (*this);
}


