//
// Created by Chelu Fabian on 07.01.2021.
//

#ifndef POO_PRODUS_BUILDER_H
#define POO_PRODUS_BUILDER_H

#include <iostream>
#include "produs.h"

class produsb {
    std::string nume_produs;
    int cod_produs;
    double pret_produs;

    friend class produs_builder;

public:
    void afisare_produsb() {
        std::cout << "Nume:" << nume_produs << "  Cod: " << cod_produs << " " << "PRET:" << pret_produs << std::endl;
    }

    produsb() = default;
};

class produs_builder {
    produsb p;
public:

    produs_builder() = default;

    produs_builder &nume_produs(std::string nume) {
        p.nume_produs = nume;
        return *this;
    }

    produs_builder &cod_produs(int nr) {
        p.cod_produs = nr;
        return *this;
    }

    produs_builder &pret_produs(double pret) {
        p.pret_produs = pret;
        return *this;
    }

    produsb build() {
        return p;
    }
};

#endif //POO_PRODUS_BUILDER_H
