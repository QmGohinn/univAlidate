#include <APL/qmlgd1g.h>

#include <QApplication>

#include <BK/people.h>
#include <BK/appglobal.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /// 登录界面停滞
    qmlgd1g w;
    AppGlobal::g_loginForm = &w;

    if(w.exec() == QDialog::Accepted){
        switch (User::g_role) {
        case 0:
            if(AppGlobal::g_Role0Form == nullptr){
                AppGlobal::g_Role0Form = new role0Form;
                AppGlobal::g_Role0Form->show();
            }
            break;
        case 1:
            if(AppGlobal::g_Role1Form == nullptr){
                AppGlobal::g_Role1Form = new role1Form;
                AppGlobal::g_Role1Form->show();
            }
            break;
        }
    }

    return a.exec();
}
