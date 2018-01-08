#include "exp.h"
#include "ui_exp.h"
//实验窗口
exp::exp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::exp)
{
    ui->setupUi(this);
}

exp::~exp()
{
    delete ui;
}
