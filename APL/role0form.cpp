#include "role0form.h"
#include "ui_role0form.h"

role0Form::role0Form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::role0Form)
{
    ui->setupUi(this);
}

role0Form::~role0Form()
{
    delete ui;
}
