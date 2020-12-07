//
// Created by Chelu Fabian on 01.12.2020.
//

#ifndef POO_OSPATAR_H
#define POO_OSPATAR_H
#include <iostream>

class ospatar{
    std::string nume_ospatar;
    int id_angajat;
public:
    ospatar()= default;
    ospatar(const std::string,const int);
    std::string getOspatar() const;
    ospatar(ospatar& ospatar);
    ~ospatar()=default;
    friend std::ostream& operator<<(std::ostream& out, ospatar& osp);
};

#endif //POO_OSPATAR_H
