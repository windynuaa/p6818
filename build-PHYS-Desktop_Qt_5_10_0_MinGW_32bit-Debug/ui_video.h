/********************************************************************************
** Form generated from reading UI file 'video.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEO_H
#define UI_VIDEO_H

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

class Ui_video
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *video)
    {
        if (video->objectName().isEmpty())
            video->setObjectName(QStringLiteral("video"));
        video->resize(800, 600);
        menubar = new QMenuBar(video);
        menubar->setObjectName(QStringLiteral("menubar"));
        video->setMenuBar(menubar);
        centralwidget = new QWidget(video);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        video->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(video);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        video->setStatusBar(statusbar);

        retranslateUi(video);

        QMetaObject::connectSlotsByName(video);
    } // setupUi

    void retranslateUi(QMainWindow *video)
    {
        video->setWindowTitle(QApplication::translate("video", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class video: public Ui_video {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_H
