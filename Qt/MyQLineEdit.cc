#include <iostream>
#include <QString>
#include "MyQLineEdit.h"
using namespace std;

MyQLineEdit::MyQLineEdit(QWidget *parent) {
    txt = false;
    Name = "vacio";
    connect(this, SIGNAL(returnPressed()), this, SLOT(enter()));
}

void MyQLineEdit::enter() {
    if (Name == "vacio") Name = this->objectName();
    emit returnPressed(text());
    Texto = text();
}

void MyQLineEdit::recibe_INP() {
    if (not text().isEmpty()) {
        txt = true;
        Texto = text();
    }
    if (Name == "vacio") Name = this->objectName();
    if (txt) emit envio(Name, Texto);
}