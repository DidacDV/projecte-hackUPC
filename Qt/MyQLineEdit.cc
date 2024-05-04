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
    cout << "Tengo nombre" << endl;
    emit returnPressed(text());
    texto = text();
}

void MyQLineEdit::recibe_INP() {
    if (not text().isEmpty()) txt = true;
    if (Name == "vacio") Name = this->objectName();
}