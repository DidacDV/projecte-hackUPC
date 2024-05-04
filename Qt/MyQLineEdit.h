#include <QLineEdit>
#include <QString>
using namespace std;

class MyQLineEdit: public QLineEdit {
    Q_OBJECT
    public:
        MyQLineEdit(QWidget *parent);
    public slots:
        void recibe_INP();
        void enter();
    signals:
        void envio(bool a, QString name, QString texto);
        void returnPressed(const QString &);
    private:
        bool txt;
        QString Name;
        QString texto;
};