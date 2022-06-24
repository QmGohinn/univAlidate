#include <APL/qmlgd1g.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /// 登录界面停滞
    qmlgd1g w;
    if(w.exec() == QDialog::Accepted){

    }

    return a.exec();
}
