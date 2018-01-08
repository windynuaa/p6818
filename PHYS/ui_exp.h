/********************************************************************************
** Form generated from reading UI file 'exp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXP_H
#define UI_EXP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exp
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *exp)
    {
        if (exp->objectName().isEmpty())
            exp->setObjectName(QStringLiteral("exp"));
        exp->resize(800, 600);
        menubar = new QMenuBar(exp);
        menubar->setObjectName(QStringLiteral("menubar"));
        exp->setMenuBar(menubar);
        centralwidget = new QWidget(exp);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        exp->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(exp);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        exp->setStatusBar(statusbar);

        retranslateUi(exp);

        QMetaObject::connectSlotsByName(exp);
    } // setupUi

    void retranslateUi(QMainWindow *exp)
    {
        exp->setWindowTitle(QApplication::translate("exp", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class exp: public Ui_exp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXP_H
