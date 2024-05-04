#ifndef DATE_H
#define DATE_H
#include <string> // Para usar std::string
using namespace std;


class Date {
private:
    int day;   // Día
    int month; // Mes
    int year;  // Año

    bool isValidDate(int d, int m, int y); // Método para validar fechas

public:
    Date(int d,int m, int y); // Constructor que toma una fecha en formato dd/mm/yyyy
    
    string toString() const;     // Retorna la fecha en formato dd/mm/yyyy
};

#endif // DATE_H
