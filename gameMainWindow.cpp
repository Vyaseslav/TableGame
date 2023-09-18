#include "gameMainWindow.h"
#include "ctime"
using namespace std;

void GameMainWindow::fillArrayButtons(){
    arrayButtons.resize(19);
    arrayButtons[0] = startButton;
    arrayButtons[1] = tileButton1;
    arrayButtons[2] = tileButton2;
    arrayButtons[3] = tileButton3;
    arrayButtons[4] = tileButton4;
    arrayButtons[5] = tileButton5;
    arrayButtons[6] = tileButton6;
    arrayButtons[7] = tileButton7;
    arrayButtons[8] = tileButton8;
    arrayButtons[9] = tileButton9;
    arrayButtons[10] = tileButton10;
    arrayButtons[11] = tileButton11;
    arrayButtons[12] = tileButton12;
    arrayButtons[13] = tileButton13;
    arrayButtons[14] = tileButton14;
    arrayButtons[15] = tileButton15;
    arrayButtons[16] = tileButton16;
    arrayButtons[17] = tileButton17;
    arrayButtons[18] = finishButton;
}


int GameMainWindow::randNum(QLineEdit* lineEdit, QPushButton* Button){
    int num = 0;
    QString sNum = QString::number(num);
    srand(time(nullptr));
    //for (int i = 0; i < rand()%10 + 3; ++i) {
        num =  rand()% 20 + 1;
        sNum = QString::number(num);
        lineEdit->setText(sNum);
    //}
    return num;
}

QString GameMainWindow::getName(QLineEdit* lineEdit, QPushButton* Button){
    if(lineEdit->text() != nullptr) {
        Button->setDisabled(true);
        Button->setText("");
        Button->setFlat(true);
        lineEdit->setReadOnly(true);
    }
    return lineEdit->text();
}

void GameMainWindow::startGame(QPushButton* startButton, QString name1, QString name2){
    startButton->setText(name1 + "\nStart!\n" + name2);
}

void GameMainWindow::comparingNumbers(int num1, int num2, QString name1, QString name2, int currentTile1, int currentTile2){

    //cTile1ref++;
    //currentTile1++;
    //cTile2ref++;
    //currentTile2++;
    char c;

    if(num1 == 20 && currentTile1 < 19){
        cTile1ref+=2;
        currentTile1+=2;
        if(num1 > num2){
            lineEditEquals->setText(">");
            c = '>';
        }
    } else
    if(num1 == 1 && currentTile1 > 0){
        cTile1ref--;
        currentTile1--;
        if(num2 > num1){
            lineEditEquals->setText("<");
            c = '<';
        }else{
            lineEditEquals->setText("=");
            c = '=';
        }
    } else
    if(num1 > num2){
        lineEditEquals->setText(">");
        c = '>';
        cTile1ref++;
        currentTile1++;
    }

    if(num2 == 20 && currentTile2 < 19){
        cTile2ref+=2;
        currentTile2+=2;
        if(num2 > num1){
            lineEditEquals->setText("<");
            c = '<';
        }
    } else
    if(num2 == 1 && currentTile2 > 0){
        cTile2ref--;
        currentTile2--;
        if(num1 > num2){
            lineEditEquals->setText(">");
            c = '>';
        }else{
            lineEditEquals->setText("=");
            c = '=';
        }
    } else
    if(num2 > num1){
        lineEditEquals->setText("<");
        c = '<';
        cTile2ref++;
        currentTile2++;
    }

    if(num1 == num2){
        lineEditEquals->setText("=");
        c = '=';
    }

    if(currentTile1 == 19)
        currentTile1 = 18;
    if(currentTile2 == 19)
        currentTile2 = 18;

    cout << currentTile1 << " " << currentTile2 << " : " << num1 << " " << c << " " << num2 << endl;

    for (int i = 1; i < arrayButtons.size()-1; ++i) {
        arrayButtons[i]->setText("\n" + QString::number(i) + "\n");
    }

    if(currentTile1 == currentTile2){
        arrayButtons[currentTile1]->setText(name1 + "\n" + QString::number(currentTile1) + "\n" + name2);
    } else{
        arrayButtons[currentTile1]->setText(name1 + "\n" + QString::number(currentTile1) + "\n");
        arrayButtons[currentTile2]->setText("\n" + QString::number(currentTile2) + "\n" + name2);
    }

        arrayButtons[0]->setText("\nStart!\n");
    if(currentTile1 == 0)
        arrayButtons[0]->setText(name1 + "\nStart!\n");
    if(currentTile2 == 0)
        arrayButtons[0]->setText("\nStart!\n" + name2);
    if(currentTile1 == currentTile2 && currentTile1 == 0)
        arrayButtons[0]->setText(name1 + "\nStart!\n" + name2);

    currentPoint1 = 0;
    currentPoint2 = 0;

    if(currentTile1 == currentTile2 && currentTile2 == 18){
        arrayButtons[18]->setText(name1 + "\nFinish\n" + name2);
        rollButton1->setDisabled(true);
        rockButton2->setDisabled(true);
        lineEditEquals->setText("Impossible!");
        rollLineEdit->setText(name1 + "\nWon!");
        rockLineEdit->setText(name2 + "\nWon!");
    } else
    if(currentTile1 == 18){
        arrayButtons[18]->setText(name1 + "\nFinish\n");
        //rollButton1->setDisabled(true);
        //rockButton2->setDisabled(true);
        lineEditEquals->setText(name1);
        rollLineEdit->setText("Won!");
        rockLineEdit->setText("Won!");
    } else
    if(currentTile2 == 18){
        arrayButtons[18]->setText("\nFinish\n" + name2);
        //rollButton1->setDisabled(true);
        //rockButton2->setDisabled(true);
        lineEditEquals->setText(name2);
        rollLineEdit->setText("Won!");
        rockLineEdit->setText("Won!");
    }
}