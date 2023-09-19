/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRestart;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_21;
    QLineEdit *lineEdit;
    QPushButton *pushButton_20;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_16;
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_14;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1787, 782);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 212, 212);"));
        actionRestart = new QAction(MainWindow);
        actionRestart->setObjectName(QString::fromUtf8("actionRestart"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);
        pushButton_21->setMinimumSize(QSize(75, 75));
        QFont font;
        font.setPointSize(10);
        pushButton_21->setFont(font);
        pushButton_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 85, 255);"));

        gridLayout->addWidget(pushButton_21, 2, 3, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(75);
        sizePolicy1.setVerticalStretch(75);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(0, 120, 215, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        lineEdit->setPalette(palette);
        QFont font1;
        font1.setPointSize(12);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit->setMaxLength(7);
        lineEdit->setFrame(false);
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(false);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);
        pushButton_20->setMinimumSize(QSize(75, 75));
        pushButton_20->setFont(font);
        pushButton_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 85, 255);"));

        gridLayout->addWidget(pushButton_20, 2, 1, 1, 1);

        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        sizePolicy1.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy1);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        lineEdit_5->setPalette(palette1);
        lineEdit_5->setFont(font1);
        lineEdit_5->setFocusPolicy(Qt::StrongFocus);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_5->setMaxLength(7);
        lineEdit_5->setFrame(false);
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_5->setReadOnly(false);

        gridLayout->addWidget(lineEdit_5, 0, 4, 1, 1);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy2);
        pushButton_22->setFont(font);
        pushButton_22->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(pushButton_22, 1, 0, 1, 1);

        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(75);
        sizePolicy3.setVerticalStretch(75);
        sizePolicy3.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy3);
        pushButton_23->setFont(font);
        pushButton_23->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton_23, 1, 4, 1, 1);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(75);
        sizePolicy4.setVerticalStretch(75);
        sizePolicy4.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy4);
        lineEdit_2->setMinimumSize(QSize(0, 75));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_2->setFrame(false);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy4.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy4);
        lineEdit_3->setMinimumSize(QSize(0, 75));
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(true);

        gridLayout->addWidget(lineEdit_3, 1, 2, 1, 1);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy4.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy4);
        lineEdit_4->setMinimumSize(QSize(0, 75));
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_4->setFrame(false);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_4->setReadOnly(true);

        gridLayout->addWidget(lineEdit_4, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setMinimumSize(QSize(75, 75));
        pushButton_16->setFont(font);
        pushButton_16->setAutoFillBackground(false);
        pushButton_16->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_16->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_16, 0, 7, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(75, 75));
        pushButton_7->setFont(font);
        pushButton_7->setAutoFillBackground(false);
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_7->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_7, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(75, 75));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        pushButton_2->setFont(font2);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_2->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(75, 75));
        pushButton_3->setFont(font);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_3->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(75, 75));
        pushButton_6->setFont(font);
        pushButton_6->setAutoFillBackground(false);
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_6->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(75, 75));
        pushButton->setFont(font);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 188, 0);"));
        pushButton->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(75, 75));
        pushButton_10->setFont(font);
        pushButton_10->setAutoFillBackground(false);
        pushButton_10->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_10->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_10, 1, 4, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setMinimumSize(QSize(75, 75));
        pushButton_13->setFont(font);
        pushButton_13->setAutoFillBackground(false);
        pushButton_13->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_13->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_13, 2, 6, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setMinimumSize(QSize(75, 75));
        pushButton_15->setFont(font);
        pushButton_15->setAutoFillBackground(false);
        pushButton_15->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_15->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_15, 0, 6, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(75, 75));
        pushButton_5->setFont(font);
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_5->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_5, 2, 2, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(75, 75));
        pushButton_9->setFont(font);
        pushButton_9->setAutoFillBackground(false);
        pushButton_9->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        pushButton_9->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_9, 0, 4, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(75, 75));
        pushButton_4->setFont(font);
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_4->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_4, 2, 1, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(75, 75));
        pushButton_8->setFont(font);
        pushButton_8->setAutoFillBackground(false);
        pushButton_8->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_8->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_8, 0, 3, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setMinimumSize(QSize(75, 75));
        pushButton_14->setFont(font);
        pushButton_14->setAutoFillBackground(false);
        pushButton_14->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_14->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_14, 1, 6, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setMinimumSize(QSize(75, 75));
        pushButton_11->setFont(font);
        pushButton_11->setAutoFillBackground(false);
        pushButton_11->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_11->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_11, 2, 4, 1, 1);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setMinimumSize(QSize(75, 75));
        pushButton_12->setFont(font);
        pushButton_12->setAutoFillBackground(false);
        pushButton_12->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_12->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_12, 2, 5, 1, 1);

        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setMinimumSize(QSize(75, 75));
        pushButton_17->setFont(font);
        pushButton_17->setAutoFillBackground(false);
        pushButton_17->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_17->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_17, 0, 8, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setMinimumSize(QSize(75, 75));
        pushButton_18->setFont(font);
        pushButton_18->setAutoFillBackground(false);
        pushButton_18->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_18->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_18, 1, 8, 1, 1);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);
        pushButton_19->setMinimumSize(QSize(75, 75));
        pushButton_19->setFont(font);
        pushButton_19->setAutoFillBackground(false);
        pushButton_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(217, 16, 80);"));
        pushButton_19->setAutoRepeat(false);

        gridLayout_2->addWidget(pushButton_19, 2, 8, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1787, 34));
        menubar->setFont(font1);
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionRestart);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_22, SIGNAL(clicked()), MainWindow, SLOT(name1input()));
        QObject::connect(pushButton_23, SIGNAL(clicked()), MainWindow, SLOT(name2input()));
        QObject::connect(pushButton_20, SIGNAL(clicked()), MainWindow, SLOT(makeRoll1()));
        QObject::connect(pushButton_21, SIGNAL(clicked()), MainWindow, SLOT(makeRoll2()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Rock & Roll Table Game", nullptr));
        actionRestart->setText(QApplication::translate("MainWindow", "Restart", nullptr));
        pushButton_21->setText(QApplication::translate("MainWindow", "ROLL!", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Input name", nullptr));
        pushButton_20->setText(QApplication::translate("MainWindow", "ROCK!", nullptr));
        lineEdit_5->setText(QString());
        lineEdit_5->setPlaceholderText(QApplication::translate("MainWindow", "Input name", nullptr));
        pushButton_22->setText(QApplication::translate("MainWindow", "1P Ready", nullptr));
        pushButton_23->setText(QApplication::translate("MainWindow", "2P Ready", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "15", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Start!", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "12", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "14", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "13", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "10", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "11", nullptr));
        pushButton_17->setText(QApplication::translate("MainWindow", "16", nullptr));
        pushButton_18->setText(QApplication::translate("MainWindow", "17", nullptr));
        pushButton_19->setText(QApplication::translate("MainWindow", "Finish!", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
