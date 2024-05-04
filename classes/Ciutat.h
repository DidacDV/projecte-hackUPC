#ifndef CIUTAT_H
#define CIUTAT_H

#include <iostream>
#include<string>
using namespace std;

class Ciutat {
    private:
    float Longitud;
    float Altitud;
    string nombre;

    public:
    Ciutat(string nom); // Constructora

    string getNom() const; //Return name;

    void addLongitud(float f); //Add longitud

    void addAltitud(float f); //Add altitud


};

#endif