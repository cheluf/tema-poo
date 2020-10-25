#include <iostream>
#include <cmath>
using namespace std;


class produse
{
    string nume_produs;
    float pret_produs;
    int cod_produs;

public:
    explicit produse();
    explicit produse(string);
    produse(string,float);
    produse(string,float,int);
    produse(produse&);
    ~produse();

    void cadou();
};

produse::produse() {

    cout << "Produsul ales: " ;
    this->nume_produs= "-";
    this->pret_produs= 0;
    this->cod_produs= 0;
    cout <<"Produsul ales:" <<this->nume_produs << " Pret: " <<this->pret_produs<<" ID:" <<this->cod_produs;
}


produse::produse(string nume_produs) {

    cout << "Produsul ales: " ;
    this->nume_produs=nume_produs;
    this->pret_produs= 0;
    this->cod_produs= 0;
    cout <<this->nume_produs<< " Pret: " <<this->pret_produs<<" ID: " <<this->cod_produs;
}

produse::produse(string nume_produs,float pret_produs) {
    cout << "Produsul ales: " ;
    this->nume_produs=nume_produs;
    this->pret_produs= pret_produs;
    this->cod_produs= 0;
    cout <<this->nume_produs<< " Pret: " <<this->pret_produs<<" ID: " <<this->cod_produs;
}

produse::produse(string nume_produs,float pret_produs,int cod_produs) {
    cout << "Produsul ales: ";
    this->nume_produs = nume_produs;
    this->pret_produs = pret_produs;
    this->cod_produs = cod_produs;
    cout << this->nume_produs << " Pret: " << this->pret_produs << " ID: " <<this->cod_produs;
    cadou();

}

produse::produse(produse& produse)
{
    cout<<"Constructor copiere ";
    this->nume_produs=produse.nume_produs;
    this->pret_produs=produse.pret_produs;
    this->cod_produs=produse.cod_produs;

    cout << this->nume_produs<< " Pret: " <<this->pret_produs<<" ID: " <<this->cod_produs;
}

produse::~produse()
{
    cout<<" \nSa va fie de bine! Va mai asteptam!";
}

void produse::cadou()
{
    if(pret_produs >= 1220)
        cout<< "\nVa multumim ca ati ales restaurantul nostru! Aceste bomboane sunt din partea noastra!";
}

int main()
{
    produse samp(" Sampanie ",1230,4);
    return 0;
}
