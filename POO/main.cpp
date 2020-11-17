#include <iostream>
#include <vector>
using namespace std;

class produse{
    string nume_produs;
    int cod_produs;
    double pret_produs;
public:
    produse(const string,const double,const int);
    double getPret();
    int getCod();
    string getNume();
    produse &operator=(const produse &);
    friend ostream& operator<<(ostream& out,const produse& abc);
    ~produse() = default;

};

ostream& operator<<(ostream& out, const produse& abc)
{
    out<< "Produs:"<< abc.nume_produs << " || " <<"Pret:" << abc.pret_produs << " || " << "ID:" << abc.cod_produs<<endl;
    return out;
}

produse::produse(const string nume_produs, const double pret_produs ,const int cod_produs) {

    this->nume_produs = nume_produs;
    this->pret_produs = pret_produs;
    this->cod_produs = cod_produs;
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
produse &produse::operator=(const produse &prod) {
    this->nume_produs = prod.nume_produs;            // op =
    this->pret_produs = prod.pret_produs;
    this->cod_produs = prod.cod_produs;
    return (*this);
}


class ospatar{

    string nume_ospatar;
    int id_angajat;
public:
    ospatar(const string,const int);
    string getOspatar() const;
    ospatar(ospatar& ospatar);
    ~ospatar()=default;
    friend ostream& operator<<(ostream& out, ospatar& osp);

};

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

class masa{
    int nrmasa;
    int persoane;
    int nr_produse;

public:
    masa(const int,const int,const int,vector <produse> produsele);
    void nota_de_plata(ospatar);
    void cadou(double);
    masa(masa& masa);
    ~masa()=default;
    friend ostream& operator<<(ostream& ost, masa& ms);
    friend masa operator+(masa&);

    vector <produse> produs;
};

ostream& operator<<(ostream& out,masa& ms)
{
    out<<"Numar masa:"<< " || " << ms.nrmasa << " || " << "Numar persoane:" << ms.persoane << " || " << "Nr produse: " << ms.nr_produse <<endl;
}

masa::masa(const int nrmasa,const int persoane,const int nr_produse,vector <produse> produsele)
{
    this->nrmasa=nrmasa;
    this->persoane=persoane;
    this->nr_produse=nr_produse;
    this->produs=produsele;
}

void masa::cadou(double suma){
    if( suma>=1200 ) cout<< "Multumim pentru ca ati ales localul nostru! Veti primi din partea casei o sticla de MOET."<<endl;
}
/*
masa operator+(masa& m,produse& p){

    for (int i = 0; i < m.produs.size(); ++i) {
        m.produs.push_back(m.produs[i]);
    }
    return m;
}
*/
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

masa::masa(masa& masa){
    this->nrmasa=masa.nrmasa;
    this->persoane=masa.persoane;
    this->nr_produse=masa.nr_produse;
    this->produs=masa.produs;
}

int main()
{

    produse vin("Vin",250,4);
    produse sampanie("Sampanie",1230,4);
    produse snitel("Snitel",45,4);
    ospatar vasile("Vasile Adrian",25);
    ospatar ion("Ionescu Marian",24);
    masa masa3(3,4,1,{vin});
    masa masa2(2,5,3,{snitel,vin,sampanie});
    masa masa1(1,3,2,{snitel,sampanie});

    masa1.nota_de_plata(vasile);

    cout << " \n ";
    cout << vasile;
    cout << " \n ";
    cout << vin;
    cout << " \n ";
    cout << masa1;

    //masa1=masa1+vin;

    //masa1.nota_de_plata(vasile);



    return 0;
}