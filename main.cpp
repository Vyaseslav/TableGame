#include "./ui_Game.h"
#include "gameMainWindow.h"
#include "saveLoader.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    GameMainWindow window(nullptr);
    Ui::MainWindow Game;
    Game.setupUi(&window);
    SaveLoader saveLoader;

    window.rollButton1 = Game.pushButton_20;
    window.rockButton2 = Game.pushButton_21;

    window.rollLineEdit = Game.lineEdit_2;
    window.rockLineEdit = Game.lineEdit_4;
    window.lineEditEquals = Game.lineEdit_3;
    window.lineEditName1 = Game.lineEdit;
    window.lineEditName2 = Game.lineEdit_5;
    window.nameButton1 = Game.pushButton_22;
    window.nameButton2 = Game.pushButton_23;
    window.startButton = Game.pushButton;

    window.tileButton1 = Game.pushButton_2;
    window.tileButton2 = Game.pushButton_3;
    window.tileButton3 = Game.pushButton_4;
    window.tileButton4 = Game.pushButton_5;
    window.tileButton5 = Game.pushButton_6;
    window.tileButton6 = Game.pushButton_7;
    window.tileButton7 = Game.pushButton_8;
    window.tileButton8 = Game.pushButton_9;
    window.tileButton9 = Game.pushButton_10;
    window.tileButton10 = Game.pushButton_11;
    window.tileButton11 = Game.pushButton_12;
    window.tileButton12 = Game.pushButton_13;
    window.tileButton13 = Game.pushButton_14;
    window.tileButton14 = Game.pushButton_15;
    window.tileButton15 = Game.pushButton_16;
    window.tileButton16 = Game.pushButton_17;
    window.tileButton17 = Game.pushButton_18;
    window.finishButton = Game.pushButton_19;

    window.menuMenu = Game.menuMenu;
    window.actionRestart = Game.actionRestart;
    window.actionLoad = Game.actionLoad;
    window.actionSave = Game.actionSave;

    window.fillArrayButtons();

    QObject::connect(window.actionRestart, &QAction::triggered,[&window](){
        window.restartGame();
    });

    QObject::connect(window.actionSave, &QAction::triggered, [&window, &saveLoader](){
        saveLoader.fillFile(window.fillFileSave());
        saveLoader.saveFile();
    });

    QObject::connect(window.actionLoad, &QAction::triggered,[&window, &saveLoader](){
        saveLoader.loadFile();
        window.loadGame(saveLoader.putFile());
    });

    window.rollButton1->setDisabled(true);
    window.rockButton2->setDisabled(true);

    window.show();

    cout << "n1=1:-1; n1=20:+2; n1>n2:n1+1." << endl;




    return QApplication::exec();
}
