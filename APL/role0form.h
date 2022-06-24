#ifndef ROLE0FORM_H
#define ROLE0FORM_H

#include <QMainWindow>

namespace Ui {
class role0Form;
}

class role0Form : public QMainWindow
{
    Q_OBJECT

public:
    explicit role0Form(QWidget *parent = nullptr);
    ~role0Form();

private:
    Ui::role0Form *ui;
};

#endif // ROLE0FORM_H
