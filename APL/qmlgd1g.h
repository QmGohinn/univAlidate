#ifndef QMLGD1G_H
#define QMLGD1G_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class qmlgd1g; }
QT_END_NAMESPACE

class qmlgd1g : public QDialog
{
    Q_OBJECT

public:
    qmlgd1g(QWidget *parent = nullptr);
    ~qmlgd1g();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::qmlgd1g *ui;
};
#endif // QMLGD1G_H
