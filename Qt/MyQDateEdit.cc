#include "MyQDateEdit.h"
using namespace std;

MyQDateEdit::MyQDateEdit(QWidget *parent) {
    name = "vacio";
}

void MyQDateEdit::fechaSelect() {
    if (name == "vacio") name = this->objectName();
    this->setDate(QDate::currentDate());
    fecha = this->date().toString("dd.MM.yyyy");
    
    if (name != "vacio") emit envio(name, fecha);
}