#ifndef DATE_H
#define DATE_H

#include <string> // Para usar std::string

class Date {
private:
    int day;   // Día
    int month; // Mes
    int year;  // Año

    bool isValidDate(int d, int m, int y); // Método para validar fechas

public:
    Date(const std::string& dateStr); // Constructor que toma una fecha en formato dd/mm/yyyy
    std::string toString() const;     // Retorna la fecha en formato dd/mm/yyyy
};

#endif // DATE_H
