#include <BK/people.h>

QVector<User> User::g_userlist;
QString User::g_currentName = "";
int User::g_role = 0;

User::User(QString _name, QString _pwd, int _role)
    :m_name(_name),m_pwd(_pwd),m_role(_role){
    ;;
}

User::~User(){
    ;;
}

int User::fillPeopleList()
{
    User* _t = new User("admin", "admin", 1);
    g_userlist.push_back(*_t);
    User* _m = new User("simple", "simple", 0);
    g_userlist.push_back(*_m);

    /// 做用户列表扩充
    ///



    /// ------------

    _t = nullptr;
    _m = nullptr;
    delete _t;
    delete _m;
    return g_userlist.size();
}
