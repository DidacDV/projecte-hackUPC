#ifndef TRAVEL_H
#define TRAVEL_H

#include <iostream>
#include<traveler.h>
#include<Date.h>
#include<Ciutat.h>
using namespace std;

class Travel {
    
    private:
    Traveler& persona;
    Date& data_ini;
    Ciutat& origen;
    Date data_fin;
    Ciutat destino;

    public:

    Travel(Traveler &p, Date &d, Ciutat &c); // Constructora

    void addDate_fin(const Date& d); //Asigna data fin

    void addCiutat_destino(const Ciutat& c); //Asigna ciutat destino


    
};

#endif
