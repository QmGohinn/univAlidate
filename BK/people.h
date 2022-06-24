#ifndef USER_H
#define USER_H

#include <QString>
#include <QMap>

class User{

public:
    User(QString _name, QString _pwd, int _role);
    ~User();

public:
    QString m_name = "";
    QString m_pwd = "";
    int m_role = 0;

public:
    static QVector<User> g_userlist;
    static int fillPeopleList();
    static QString g_currentName;
    static int g_role;
};

#endif // USER_H
