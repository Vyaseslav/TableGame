//
// Created by slava on 17.09.2023.
//

#ifndef GAMETEST_GAMEMAINWINDOW_H
#define GAMETEST_GAMEMAINWINDOW_H

#include <QMainWindow>
#include "iostream"
#include "QLineEdit"
#include "QPushButton"
#include "QMenu"
#include "QMenuBar"
#include "QStatusBar"
#include "vector"
#include <sstream>
using namespace std;
#include "iostream"

class GameMainWindow : public QMainWindow{
    Q_OBJECT

public:
    QAction *actionRestart = nullptr;
    QAction *actionSave = nullptr;
    QAction *actionLoad = nullptr;

    QLineEdit* rollLineEdit = nullptr;
    QLineEdit* rockLineEdit = nullptr;
    QLineEdit* lineEditName1 = nullptr;
    QLineEdit* lineEditName2 = nullptr;
    QLineEdit* lineEditEquals = nullptr;

    QPushButton* nameButton1 = nullptr;
    QPushButton* nameButton2 = nullptr;
    QPushButton* rollButton1 = nullptr;
    QPushButton* rockButton2 = nullptr;

    QPushButton* startButton = nullptr;
    QPushButton* finishButton = nullptr;
    QPushButton* tileButton1 = nullptr;
    QPushButton* tileButton2 = nullptr;
    QPushButton* tileButton3 = nullptr;
    QPushButton* tileButton4 = nullptr;
    QPushButton* tileButton5 = nullptr;
    QPushButton* tileButton6 = nullptr;
    QPushButton* tileButton7 = nullptr;
    QPushButton* tileButton8 = nullptr;
    QPushButton* tileButton9 = nullptr;
    QPushButton* tileButton10 = nullptr;
    QPushButton* tileButton11 = nullptr;
    QPushButton* tileButton12 = nullptr;
    QPushButton* tileButton13 = nullptr;
    QPushButton* tileButton14 = nullptr;
    QPushButton* tileButton15 = nullptr;
    QPushButton* tileButton16 = nullptr;
    QPushButton* tileButton17 = nullptr;

    vector<QPushButton*> arrayButtons;

    QMenuBar *menubar = nullptr;
    QMenu *menuMenu = nullptr;
    QStatusBar *statusbar = nullptr;

    void fillArrayButtons();
    void restartGame();
    string fillFileSave();
    void loadGame(string save);
    GameMainWindow(QWidget* parent = nullptr): QMainWindow(parent){}
private:
    QString getName(QLineEdit* lineEdit, QPushButton* Button);
    int randNum(QLineEdit* lineEdit, QPushButton* Button);
    void comparingNumbers(int num1, int num2, QString name1, QString name2, int currentTile1, int currentTile2);
    void startGame(QPushButton* tile, QString name1, QString name2);



    QString name1 = nullptr;
    QString name2 = nullptr;
    int currentPoint1 = 0;
    int currentPoint2 = 0;
    int currentTile1 = 0;
    int currentTile2 = 0;
    int& cTile1ref = currentTile1;
    int& cTile2ref = currentTile2;

public slots:
    void name1input(){name1 = getName(lineEditName1, nameButton1); if(name1 != nullptr && name2 != nullptr) startGame(startButton, name1, name2);};
    void name2input(){name2 = getName(lineEditName2, nameButton2); if(name1 != nullptr && name2 != nullptr) startGame(startButton, name1, name2);};
    void makeRoll1(){currentPoint1 = randNum(rollLineEdit, rollButton1); if(currentPoint1 != 0 && currentPoint2 != 0){comparingNumbers(currentPoint1, currentPoint2, name1, name2, cTile1ref, cTile2ref);}};
    void makeRoll2(){currentPoint2 = randNum(rockLineEdit, rockButton2); if(currentPoint1 != 0 && currentPoint2 != 0){comparingNumbers(currentPoint1, currentPoint2, name1, name2, cTile1ref, cTile2ref);}};
};



#endif //GAMETEST_GAMEMAINWINDOW_H
