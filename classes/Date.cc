#include <Date.h> // Incluir el archivo de cabecera
#include <sstream> // Para manipular cadenas
#include <stdexcept> // Para lanzar excepciones en caso de error

// Constructor que recibe una fecha en formato dd/mm/yyyy
Date::Date(const std::string& dateStr) {
    std::stringstream ss(dateStr);
    char delimiter;

    if (!(ss >> day >> delimiter >> month >> delimiter >> year) || delimiter != '/') {
        throw std::invalid_argument("Formato de fecha incorrecto");
    }

    if (!isValidDate(day, month, year)) {
        throw std::invalid_argument("Fecha no válida");
    }
}

// Método para validar si una fecha es válida
bool Date::isValidDate(int d, int m, int y) {
    if (y < 1900 || m < 1 || m > 12 || d < 1) return false;

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Ajustar para años bisiestos
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        daysInMonth[1] = 29;
    }

    return d <= daysInMonth[m - 1];
}

// Método para obtener la fecha como cadena en formato dd/mm/yyyy
std::string Date::toString() const {
    std::ostringstream oss;
    oss << (day < 10 ? "0" : "") << day << '/' // Asegura dos dígitos para el día
        << (month < 10 ? "0" : "") << month << '/' // Dos dígitos para el mes
        << year; // Año
    return oss.str();
}