//
// Created by Chelu Fabian on 01.12.2020.
//

#ifndef POO_PRODUS_H
#define POO_PRODUS_H
#include <iostream>

class produs{
protected:
    std::string nume_produs;
    int cod_produs;
    double pret_produs;
public:
    produs()=default;
    produs(const std::string,const double,const int);
    double getPret();
    int getCod();
    std::string getNume();
    produs &operator=(const produs &);
    friend std::ostream& operator<<(std::ostream& out,const produs& abc);
    ~produs() = default;

    virtual void afisare_produs(){
        std::cout<< "Nume produs: " <<nume_produs << " || ID: "<<cod_produs << std::endl;
    }

};

#endif //POO_PRODUS_H
