#include "DBfunctions.h"

int main() {
    DBfunctions a;
    cout << "Inicializando base de datos" << endl;
    a.init_DB();
    cout << "Actualizando latitudes y longitudes..." << endl;
    a.updatePositions();
    a.displayPositions();
}