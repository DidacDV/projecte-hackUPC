#include "MyQTableWidget.h"
#include <QTableWidget>
#include <QString>
#include <iostream>
using namespace std;

MyQTableWidget::MyQTableWidget(QWidget *parent) {
    col[0] = col[2] = false;
    col[1] = true;
}

void MyQTableWidget::rec(QString name, QString texto) {
    cout << name.toStdString() << endl;
    if (name == "Nombre") {
        col[0] = true;
        Nombre = texto;
    } 
    else if(name == "Ciudad") { 
        col[2] = true;
        Ciudad = texto;
    } else if (name == "Fecha")

    if (not col[0]) {
        cout << "Falta Nombre" << endl;
    } else if (not col[1]) {
        cout << "Falta Fecha" << endl;
    } else if (not col[2]) {
        cout << "Falta Ciudad" << endl;
    } else if (col[0] and col[1] and col[2]) {
        int row = this->rowCount();
        this->insertRow(row);
        this->setItem(row, 0, new QTableWidgetItem(Nombre));
        this->segItem(row, 1, new QTableWidgetItem(Fecha));
        this->segItem(row, 2, new MyQTableWidget(Ciudad));
    }
}