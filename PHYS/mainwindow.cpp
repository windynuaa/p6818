#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
//登陆页面
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->lineEdit->text()=="041600419")
    {
        this->hide();
        emit(login(ui->lineEdit->text()));
    }
}
