#include "MyQTableWidget.h"
#include <QTableWidget>
#include <QString>
#include <iostream>
using namespace std;

MyQTableWidget::MyQTableWidget(QWidget *parent) {
    col[0] = col[1] = col[2] = col[3] = col[4] = false;
}

void MyQTableWidget::rec(QString name, QString texto) {
    if (name == "Nombre") {
        col[0] = true;
        Nombre = texto;
    } else if (name == "CiudadO") {
        col[1] = true;
        CiudadO = texto;
    } else if (name == "CiudadD") {
        col[2] = true;
        CiudadD = texto;
    } else if (name == "FechaS") {
        col[3] = true;
        FechaS = texto;
    } else if (name == "FechaL") {
        col[4] = true;
        FechaL = texto;
    }
    
    if (not col[0]) {
        cout << "Falta Nombre" << endl;
    } else if (not col[1]) {
        cout << "Falta Ciudad Origen" << endl;
    } else if (not col[2]) {
        cout << "Falta Ciudad Destino" << endl;
    } else if (not col[3]) {
        cout << "Falta fecha Salida" << endl;
    } else if (not col[4]) {
        cout << "Falta fecha Llegada" << endl;
    } else if (col[0] and col[1] and col[2] and col[3] and col[4]) {
        int row = this->rowCount();
        this->insertRow(row);
        this->setItem(row, 0, new QTableWidgetItem(Nombre));
        this->setItem(row, 1, new QTableWidgetItem(CiudadO));
        this->setItem(row, 2, new QTableWidgetItem(CiudadD));
        this->setItem(row, 3, new QTableWidgetItem(FechaS));
        this->setItem(row, 4, new QTableWidgetItem(FechaL));        
        col[0] = col[1] = col[2] = col[3] = col[4] = false;
    }
}