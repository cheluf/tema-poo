#include <iostream>
#include <cmath>
using namespace std;

class produse{
    string nume_produs;
    float pret_produs;
    int cod_produs;

public:
    produse(string,float,int);
    produse(produse&);
    ~produse();

    void cadou();
};

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

class ospatar{

    string nume_ospatar;
    int id_angajat;

public:
    ospatar(string, int);
    ospatar(ospatar&);
    ~ospatar();
};

ospatar::ospatar(string nume_ospatar, int id_angajat)
{
    this-> nume_ospatar= nume_ospatar;
    this-> id_angajat= id_angajat;
    cout<< "Detalii despre servire:" << " " << "Numele angajatului:" << this->nume_ospatar << " " << "ID:" << this->id_angajat << endl;
}

ospatar::ospatar(ospatar& ospatar)
{
    this-> nume_ospatar= ospatar.nume_ospatar;
    this-> id_angajat= ospatar.id_angajat;
    cout<< "Detalii despre servire:" << " " << "Numele angajatului:" << this->nume_ospatar << " " << "ID:" << this->id_angajat << endl;
}

~ospatar(){
    cout<<"Tipsul ospatarului reprezinta 10% din comanda. Va multumim"<< endl;
}

int main()
{
    produse samp(" Sampanie ",1230,4);
    ospatar ion("Ionescu Marian",24);
    return 0;
}
