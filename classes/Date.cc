#include <Date.h> // Incluir el archivo de cabecera
#include <sstream> // Para manipular cadenas
#include <stdexcept> // Para lanzar excepciones en caso de error

// Constructor que recibe una fecha en formato dd/mm/yyyy
Date::Date(int d, int m, int y) {
    if(isValidDate(d,m,y)) { 
        day = d;
        month = m;
        year = y;
    }
}

// Método para validar si una fecha es válida
bool Date::isValidDate(int d, int m, int y) {
    if (y < 0 || m < 1 || m > 12 || d < 1 || d > 31) return false;
}

// Método para obtener la fecha como cadena en formato dd/mm/yyyy
string Date::toString() const {
    string resultado = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    return resultado;
}