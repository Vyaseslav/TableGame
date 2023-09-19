//
// Created by slava on 19.09.2023.
//

#ifndef GAMETEST_SAVELOADER_H
#define GAMETEST_SAVELOADER_H

#include "string"
#include "QString"
#include "gameMainWindow.h"
#include "./ui_Game.h"
#include "fstream"
#include "sstream"
using namespace std;

class SaveLoader{
public :
    SaveLoader() = default;

    void fillFile(string file);

    void saveFile();

    void loadFile();

    string putFile();

private:
    string fileSave = "name1 name2 0 0 0 0";
};


#endif //GAMETEST_SAVELOADER_H
