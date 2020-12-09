#include <iostream>
#include "masa.h"
#include "produs.h"
#include "ospatar.h"
#include "mancare.h"
using namespace std;

int main() {

    produs vin("Vin", 250, 4);
    produs sampanie("Sampanie", 1230, 4);
    produs snitel("Snitel", 45, 4);
    produs parmezan("Parmezan",10,2);
    produs pieptpui("Piept de pui",5,3);
    ospatar vasile("Vasile Adrian", 25);
    ospatar ion("Ionescu Marian", 24);
    masa masa3(3, 4, 1, {vin});
    masa masa2(2, 5, 3, {snitel, vin, sampanie});
    masa masa1(1, 3, 2, {snitel, sampanie});

    cout << masa1;
    masa1 = masa1 + sampanie;    //adaug produse la masa1
    cout << masa1;             //creste nr. de produse de la masa
    masa1 = masa1 + vin;
    cout << masa1;
    cout << "\n";
    masa1.nota_de_plata(vasile);   // nota de plata
    cout << "\n";

    cout << vasile;
    cout << vin;

    cout << "\n";

    vin.afisare_produs();      // afisez produsul
    
    cout<< "\n";

    mancare id4("Snitel de pui",{pieptpui,parmezan});      // initializez ingredientele
    id4.afisare_produs();     //afisez ingredientele

    return 0;
}