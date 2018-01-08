#include "form.h"
#include "ui_form.h"
//主页面
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}
void Form::startui(QString user)
{
    ui->label->setText(user);
    this->show();
}
void Form::on_pushButton_4_clicked()
{

}
