#include <Ciutat.h>

Ciutat::Ciutat(string nom){
    nombre = nom; 
}

string Ciutat::getNom() const {
    return nombre;
}

void Ciutat::addLongitud(float f) {
    Longitud = f;
}

void Ciutat::addAltitud(float f) {
    Altitud = f;
}