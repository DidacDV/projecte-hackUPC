/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <MyQDateEdit.h>
#include <MyQLineEdit.h>
#include <MyQTableWidget.h>
#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    MyQLineEdit *Nombre;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    MyQDateEdit *FechaS;
    MyQDateEdit *FechaL;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    MyQLineEdit *CiudadO;
    MyQLineEdit *CiudadD;
    QPushButton *pushButton_2;
    MyQTableWidget *Tabla;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QString::fromUtf8("MyForm"));
        MyForm->resize(800, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../home/andres69/Descargas/Logo.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        MyForm->setWindowIcon(icon);
        MyForm->setInputMethodHints(Qt::ImhNone);
        verticalLayout_2 = new QVBoxLayout(MyForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(MyForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        Nombre = new MyQLineEdit(widget);
        Nombre->setObjectName(QString::fromUtf8("Nombre"));

        horizontalLayout_3->addWidget(Nombre);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        FechaS = new MyQDateEdit(widget);
        FechaS->setObjectName(QString::fromUtf8("FechaS"));
        FechaS->setMinimumDateTime(QDateTime(QDate(2000, 9, 14), QTime(0, 0, 0)));
        FechaS->setMaximumDate(QDate(2100, 12, 31));
        FechaS->setDate(QDate(2024, 1, 1));

        horizontalLayout_2->addWidget(FechaS);

        FechaL = new MyQDateEdit(widget);
        FechaL->setObjectName(QString::fromUtf8("FechaL"));
        FechaL->setMaximumDateTime(QDateTime(QDate(2100, 12, 31), QTime(23, 59, 59)));
        FechaL->setMinimumDateTime(QDateTime(QDate(2000, 9, 14), QTime(0, 0, 0)));
        FechaL->setDate(QDate(2024, 1, 1));

        horizontalLayout_2->addWidget(FechaL);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(8);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        CiudadO = new MyQLineEdit(widget);
        CiudadO->setObjectName(QString::fromUtf8("CiudadO"));

        horizontalLayout->addWidget(CiudadO);

        CiudadD = new MyQLineEdit(widget);
        CiudadD->setObjectName(QString::fromUtf8("CiudadD"));

        horizontalLayout->addWidget(CiudadD);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        Tabla = new MyQTableWidget(widget);
        if (Tabla->columnCount() < 5)
            Tabla->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Tabla->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Tabla->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Tabla->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Tabla->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Tabla->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        Tabla->setObjectName(QString::fromUtf8("Tabla"));

        verticalLayout->addWidget(Tabla);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(widget);


        retranslateUi(MyForm);
        QObject::connect(pushButton, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Nombre, SLOT(recibe_INP()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), CiudadO, SLOT(recibe_INP()));
        QObject::connect(Nombre, SIGNAL(envio(QString,QString)), Tabla, SLOT(rec(QString,QString)));
        QObject::connect(CiudadO, SIGNAL(envio(QString,QString)), Tabla, SLOT(rec(QString,QString)));
        QObject::connect(pushButton_2, SIGNAL(clicked()), FechaS, SLOT(fechaSelect()));
        QObject::connect(CiudadD, SIGNAL(envio(QString,QString)), Tabla, SLOT(rec(QString,QString)));
        QObject::connect(pushButton_2, SIGNAL(clicked()), FechaL, SLOT(fechaSelect()));
        QObject::connect(FechaS, SIGNAL(envio(QString,QString)), Tabla, SLOT(rec(QString,QString)));
        QObject::connect(FechaL, SIGNAL(envio(QString,QString)), Tabla, SLOT(rec(QString,QString)));
        QObject::connect(pushButton_2, SIGNAL(clicked()), CiudadD, SLOT(recibe_INP()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QCoreApplication::translate("MyForm", "Hackathon", nullptr));
        label->setText(QCoreApplication::translate("MyForm", "Nombre", nullptr));
        label_2->setText(QCoreApplication::translate("MyForm", "Fechas", nullptr));
        label_3->setText(QCoreApplication::translate("MyForm", "Ciudades", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyForm", "Enter", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Tabla->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MyForm", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Tabla->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MyForm", "Ciudad Origen", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Tabla->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MyForm", "Ciudad Destino", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Tabla->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MyForm", "Fecha Salida", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Tabla->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MyForm", "Fecha Llegada", nullptr));
        pushButton->setText(QCoreApplication::translate("MyForm", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
