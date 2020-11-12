#include <iostream>
#include <vector>
using namespace std;

class produse{
    string nume_produs;
    int cod_produs;
    double pret_produs;
public:
    produse(string,double,int);
    double getPret();
    int getCod();
    string getNume();

};

produse::produse(string nume_produs, double pret_produs ,int cod_produs) {

    this->nume_produs = nume_produs;
    this->pret_produs = pret_produs;
    this->cod_produs = cod_produs;
    cout<< "Produs:"<< this->nume_produs << " || " <<"Pret:" << this->pret_produs << " || " << "ID:" << this->cod_produs<<endl;

}

int produse::getCod(){
    return cod_produs;
}

string produse::getNume(){
    return nume_produs;
}

double produse::getPret(){
    return pret_produs;
}


class ospatar{

    string nume_ospatar;
    int id_angajat;
public:
    ospatar(string, int);
    string getOspatar();

};

ospatar::ospatar(string nume_ospatar, int id_angajat){
    this-> nume_ospatar= nume_ospatar;
    this-> id_angajat= id_angajat;

    cout<<"Ospatar:" <<this->nume_ospatar << " || " << "ID:" <<this->id_angajat << endl;
}

string ospatar::getOspatar(){
    return nume_ospatar;
}

class masa{
    int nrmasa;
    int persoane;
    int nr_produse;
    vector <produse> produs;

public:
    masa(int,int,int,vector <produse> produsele);
    void nota_de_plata(ospatar);
    void cadou(double);

};
masa::masa(int nrmasa,int persoane,int nr_produse,vector <produse> produsele)
{
    this->nrmasa=nrmasa;
    this->persoane=persoane;
    this->nr_produse=nr_produse;
    this->produs=produsele;
    cout<<"Numar masa:"<< " || " << this->nrmasa << " || " << "Numar persoane:" << this->persoane << " || " << "Nr produse: " << nr_produse <<endl;
}

void masa::cadou(double suma){
    if( suma>=1200 ) cout<< "Multumim pentru ca ati ales localul nostru! Veti primi din partea casei o sticla de MOET."<<endl;
}

void masa::nota_de_plata(ospatar ospt)
{
    cout<<"Nota de plata masa " <<nrmasa <<endl;
    cout<<"********************"<<endl;
    int i;
    double suma = 0;
    for(i=0; i< nr_produse; i++)
    {
        cout<<produs[i].getNume()<< " || " << "ID:" <<produs[i].getCod() << " || " <<produs[i].getPret() << "lei"<<endl;// produsele comandate

    }
    cout<<"********************"<<endl;
    cout<< "Nume ospatar: "<<ospt.getOspatar()<<endl;
    for(i=0; i<nr_produse; i++)                  //pretul tuturor produselor
    {
        suma = suma + produs[i].getPret();
    }
    cout<<"TOTAL: " << suma << "lei"<<endl;
    cout<<"********************"<<endl;
    cadou(suma);
}

int main()
{

    produse vin("Vin",250,4);
    produse sampanie("Sampanie",1230,4);
    produse snitel("Snitel",45,4);
    cout<< " \n ";
    ospatar vasile("Vasile Adrian",25);
    ospatar ion("Ionescu Marian",24);
    cout<< " \n ";
    masa masa3(3,4,1,{vin});
    masa masa2(2,5,3,{snitel,vin,sampanie});
    masa masa1(1,3,2,{snitel,sampanie});
    cout<< " \n ";
    masa3.nota_de_plata(vasile);
    cout<< " \n ";
    masa2.nota_de_plata(ion);
    cout<< " \n ";
    masa1.nota_de_plata(vasile);

    return 0;
}