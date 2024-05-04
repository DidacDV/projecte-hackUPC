#include <QDateEdit>
#include <QString>
using namespace std;

class MyQDateEdit: public QDateEdit {
    Q_OBJECT

    public:
        MyQDateEdit(QWidget *parent);
    private:
        QString name;
        QString fecha;
    public slots:
        void fechaSelect();

    signals:
        void envio(QString name, QString fecha);
};