#include <iostream>
#include <vector>
using namespace std;

class produs{
    string nume_produs;
    int cod_produs;
    double pret_produs;
public:
    produs(const string,const double,const int);
    double getPret();
    int getCod();
    string getNume();
    produs &operator=(const produs &);
    friend ostream& operator<<(ostream& out,const produs& abc);
    ~produs() = default;

};

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
    vector <produs> produse;

public:
    masa(const int,const int,const int,vector <produs> produsele);
    void nota_de_plata(ospatar);
    void cadou(double);
    masa(masa& masa);
    ~masa()=default;
    friend ostream& operator<<(ostream& ost, masa& ms);
    friend masa operator+(masa&,produs&);
};

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
}

masa::masa(masa& masa){
    this->nrmasa=masa.nrmasa;
    this->persoane=masa.persoane;
    this->nr_produse=masa.nr_produse;
    this->produse=masa.produse;
}

int main()
{

    produs vin("Vin",250,4);
    produs sampanie("Sampanie",1230,4);
    produs snitel("Snitel",45,4);
    ospatar vasile("Vasile Adrian",25);
    ospatar ion("Ionescu Marian",24);
    masa masa3(3,4,1,{vin});
    masa masa2(2,5,3,{snitel,vin,sampanie});
    masa masa1(1,3,2,{snitel,sampanie});

    cout<< masa1;
    masa1=masa1 + sampanie;    //adaug produse la masa1
    cout << masa1;             //creste nr. de produse de la masa
    masa1=masa1 + vin;
    cout<< masa1;
    cout<< "\n";
    masa1.nota_de_plata(vasile);   // nota de plata
    cout<< "\n";
    cout << vasile;
    cout << vin;

    return 0;
}