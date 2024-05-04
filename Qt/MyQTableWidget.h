#include <QTableWidget>
#include <QString>
using namespace std;

class MyQTableWidget:public QTableWidget {
    Q_OBJECT
    private:
        bool col[3];
        QString Nombre;
        QString Fecha;
        QString Ciudad;
    public:
        MyQTableWidget(QWidget *parents);

    public slots:

        void rec(QString name, QString texto);

    signals:

};