#ifndef EXP_H
#define EXP_H

#include <QMainWindow>

namespace Ui {
class exp;
}

class exp : public QMainWindow
{
    Q_OBJECT

public:
    explicit exp(QWidget *parent = 0);
    ~exp();

private:
    Ui::exp *ui;
};

#endif // EXP_H
