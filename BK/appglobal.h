#ifndef APPGLOBAL_H
#define APPGLOBAL_H

#include <BK/people.h>
#include <APL/role0form.h>
#include <APL/qmlgd1g.h>
#include <APL/role1form.h>

class AppGlobal{

public:
    static role0Form* g_Role0Form;
    static role1Form* g_Role1Form;
    static qmlgd1g* g_loginForm;
};

#endif // APPGLOBAL_H
