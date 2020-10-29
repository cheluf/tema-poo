#include <iostream>
using namespace std;

class produse{
    string nume_produs;
    int cod_produs;
    int masa;
    float pret_produs;
    friend class ospatar;

public:
    produse(string,float,int,int);
    produse(float);
    produse(produse&);
    ~produse();
    void cadou();
};

produse::produse(string nume_produs,float pret_produs,int cod_produs,int masa) {

    this->nume_produs = nume_produs;
    this->pret_produs = pret_produs;
    this->cod_produs = cod_produs;
    this->masa=masa;
    cout<< "Produs:"<< this->nume_produs << " || " <<"Pret:" << this->pret_produs << " || " << "ID:" << this->cod_produs << " || " << "Nr.masa:" << this->masa;

}

produse::produse(float pret_produs)
{
    this->pret_produs=pret_produs;
}

produse::produse(produse& produse)
{
    this->nume_produs=produse.nume_produs;
    this->pret_produs=produse.pret_produs;
    this->cod_produs=produse.cod_produs;
    this->masa=produse.masa;
}

produse::~produse()
{
    cout<<" \n*****************";
}

void produse::cadou()
{
    if(pret_produs >= 1220)
        cout<< "\nVa multumim ca ati ales restaurantul nostru! Acest vin este din partea casei!!"<< endl;
}

class ospatar{

    string nume_ospatar;
    int id_angajat;

public:

    ospatar(string, int);
    ospatar(ospatar&);
    ~ospatar();
    void nota_de_plata(produse plata);
};

ospatar::ospatar(string nume_ospatar, int id_angajat)
{
    this-> nume_ospatar= nume_ospatar;
    this-> id_angajat= id_angajat;

    cout<<"\nOspatar:" <<this->nume_ospatar << " || " << "ID:" <<this->id_angajat << endl;
}

ospatar::ospatar(ospatar& ospatar)
{
    this-> nume_ospatar= ospatar.nume_ospatar;
    this-> id_angajat= ospatar.id_angajat;
}

ospatar::~ospatar(){
    cout<<"\nTipsul ospatarului reprezinta 10%."<< endl;
}

void ospatar::nota_de_plata(produse p)
{
    cout<< "\nNumele meu este" << " " << nume_ospatar << " " << ",iar eu am fost ospatarul dvs. Aveti in total de plata:" << " " << p.pret_produs << "lei. " << "Doriti cash sau card?"<< endl;
}

int main()
{
    produse samp(" Sampanie ",1230,4,13);
    produse samp1(1230);
    ospatar ion("Ionescu Marian",24);

    samp.cadou();
    ion.nota_de_plata(samp1);

    return 0;
}