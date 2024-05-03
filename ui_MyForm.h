/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QPushButton *pushButton;
    QWebView *webView;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QString::fromUtf8("MyForm"));
        MyForm->resize(800, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../home/andres69/Descargas/Logo.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        MyForm->setWindowIcon(icon);
        MyForm->setInputMethodHints(Qt::ImhNone);
        pushButton = new QPushButton(MyForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 760, 135, 25));
        webView = new QWebView(MyForm);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(90, 50, 611, 571));
        webView->setUrl(QUrl(QString::fromUtf8("https://consent.google.com/m?continue=https://www.google.com/maps&gl=ES&m=0&pc=m&uxe=eomtm&cm=2&hl=es&src=1")));

        retranslateUi(MyForm);

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QCoreApplication::translate("MyForm", "Hackathon", nullptr));
        pushButton->setText(QCoreApplication::translate("MyForm", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
