//
// Created by Chelu Fabian on 04.12.2020.
//

#include "note.h"
#include <iostream>
#include <vector>
using namespace std;

note::note(std::vector <int> nt,ospatar)
{
this -> nt = nt;
}

float note::nota_ospatar(ospatar p){
    int i;
    float s;
    cout << "Ce note a primit ospatarul" << " "<< p.getOspatar() << " " <<"in aceasta zi:"<< endl;

    for(i=0; i<nt.size(); i++)                           // afisare note
    {
      cout<< "Nota masa "<< i+1 << ":" << nt[i]<< endl;
    }

    for(i=0;i<nt.size();i++)                      // calculare media aritmetica
    {
        s=s+nt[i];
    }
    cout<<"Nota finala a ospatarului este"<< " " << s/nt.size()<< endl;

    if(s/nt.size() <= 5)
        cout<< "Ti-a fost scazut din salariu 100 lei."<< endl;
    else cout<< "Ti-a crescut salariu cu 100 lei." << endl;
}



