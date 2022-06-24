#include "role1form.h"
#include "ui_role1form.h"

role1Form::role1Form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::role1Form)
{
    ui->setupUi(this);
}

role1Form::~role1Form()
{
    delete ui;
}
