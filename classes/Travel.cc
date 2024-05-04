#include<Travel.h>

Travel::Travel(Traveler p, Date d, Ciutat c) {
    persona = p;
    data_ini = d;
    origen = c;
}

void Travel::addDate_fin(Date d) {
    data_fin = d;
}

void Travel::addCiutat_destino(Ciutat c) {
    destino = c;
}