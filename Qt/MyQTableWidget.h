#include <QTableWidget>
#include <QString>
using namespace std;

class MyQTableWidget:public QTableWidget {
    Q_OBJECT
    private:
        bool col[5];
        QString Nombre;
        QString FechaS;
        QString CiudadD;
        QString CiudadO;
        QString FechaL;

    public:
        MyQTableWidget(QWidget *parents);

    public slots:

        void rec(QString name, QString texto);

    signals:

};