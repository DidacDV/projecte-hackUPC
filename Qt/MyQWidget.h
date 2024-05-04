#include <QWidget>
#include <QLineEdit>
using namespace std;

class MyQWidget: public QWidget {
    Q_OBJECT

    public:
        MyQWidget(QWidget *parent);
    signals:

    public slots:

    private:
        MyQWidget *actual;
        QLineEdit *nombre;
};