#include "qmlgd1g.h"
#include "ui_qmlgd1g.h"

#include <QMessageBox>
#include <QDebug>

#include <BK/people.h>

qmlgd1g::qmlgd1g(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::qmlgd1g)
{
    ui->setupUi(this);
    User::fillPeopleList();
}

qmlgd1g::~qmlgd1g()
{
    delete ui;
}

/// 关闭按钮
void qmlgd1g::on_pushButton_clicked()
{
    this->reject();
    this->close();
    this->~qmlgd1g();
}

/// 登录按钮
void qmlgd1g::on_pushButton_2_clicked()
{
    bool _loginflg = false;

    QString _name = ui->lineEdit->text();
    QString _pwd = ui->lineEdit_2->text();

    for(const auto& _it : User::g_userlist){
        if(_name.compare(_it.m_name) == 0 && _pwd.compare(_it.m_pwd) == 0){
            _loginflg = true;
            User::g_currentName = _it.m_name;
            User::g_role = _it.m_role;

            qDebug() << "您当前登录用户名为" << User::g_currentName << " " << "权限为" << User::g_role;
            break;
        }
    }

    if(_loginflg){
        this->accept();
    }
    else{
        QMessageBox::critical(this, " 通知", "登录失败, 请仔细核对!", "知道了!");
        return;
    }
}

/// 注册按钮
void qmlgd1g::on_pushButton_3_clicked()
{
    bool _regiFlg = false;

    if(_regiFlg == false){
        QMessageBox::information(this, " 提示", "暂未提供注册功能!", "知道了");
    }
}
