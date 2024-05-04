#include "Travel.h"

// Constructor para Travel con inicializaciones explícitas usando lista de inicialización
Travel::Travel(Traveler& p, Date& d, Ciutat& c)
    : persona(p), 
      data_ini(d),  
      origen(c),  
      data_fin(d), 
      destino(c) 
{
    // El cuerpo del constructor está vacío porque las inicializaciones se hacen arriba
}

void Travel::addDate_fin(const Date& d) {
    data_fin = d;  // Asigna un nuevo valor a data_fin
}

void Travel::addCiutat_destino(const Ciutat& c) {
    destino = c;  // Asigna un nuevo valor a destino
}