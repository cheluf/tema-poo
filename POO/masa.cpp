#include "masa.h"
#include <iostream>
#include <vector>
using namespace std;


ostream& operator<<(ostream& out,masa& ms)
{
    out<<"Numar masa:"<< " || " << ms.nrmasa << " || " << "Numar persoane:" << ms.persoane << " || " << "Nr produse: " << ms.nr_produse <<endl;
    return out;
}

masa::masa(const int nrmasa,const int persoane,const int nr_produse,vector <produs> produsele)
{
    this->nrmasa=nrmasa;
    this->persoane=persoane;
    this->nr_produse=nr_produse;
    this->produse=produsele;
}

void masa::cadou(double suma){
    if( suma>=1200 ) cout<< "Multumim pentru ca ati ales localul nostru! Veti primi din partea casei o sticla de MOET."<<endl;
}


masa operator+(masa& m,produs& p){
    m.produse.push_back(p);
    m.nr_produse= m.produse.size();
    return m;
}


void masa::nota_de_plata(ospatar ospt)
{
    cout<<"Nota de plata masa " <<nrmasa <<endl;
    cout<<"********************"<<endl;
    int i;
    double suma = 0;
    for(i=0; i< nr_produse; i++)
    {
        cout<<produse[i].getNume()<< " || " << "ID:" <<produse[i].getCod() << " || " <<produse[i].getPret() << "lei"<<endl;// produsele comandate

    }
    cout<<"********************"<<endl;
    cout<< "Nume ospatar: "<<ospt.getOspatar()<<endl;
    for(i=0; i<nr_produse; i++)                          //pretul tuturor produselor
    {
        suma = suma + produse[i].getPret();
    }
    cout<<"TOTAL: " << suma << "lei"<<endl;
    cout<<"********************"<<endl;
    cadou(suma);
    produse.clear();
}

masa::masa(masa& masa){
    this->nrmasa=masa.nrmasa;
    this->persoane=masa.persoane;
    this->nr_produse=masa.nr_produse;
    this->produse=masa.produse;
}

int masa::getNrProduse() const {
    return nr_produse;
}
