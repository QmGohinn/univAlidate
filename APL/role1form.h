#ifndef ROLE1FORM_H
#define ROLE1FORM_H

#include <QMainWindow>

namespace Ui {
class role1Form;
}

class role1Form : public QMainWindow
{
    Q_OBJECT

public:
    explicit role1Form(QWidget *parent = nullptr);
    ~role1Form();

private:
    Ui::role1Form *ui;
};

#endif // ROLE1FORM_H
