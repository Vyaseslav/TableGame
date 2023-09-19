#include "saveLoader.h"

void SaveLoader::fillFile(std::string file) {
    fileSave = file;
}

string SaveLoader::putFile(){
    return fileSave;
}

void SaveLoader::saveFile() {
    std::ofstream file("./Saveload.txt");
    if (file.is_open()) {
        file << fileSave;
        file.close();
        //std::cout << "Yes " << std::endl;
    } else {
        //std::cerr << "No " << std::endl;
    }
}

void SaveLoader::loadFile() {
    std::ifstream file("./Saveload.txt");
    std::string str;
    if (file.is_open()) {
        std::getline(file, str);
        file.close();
        //std::cout << "Yes " << std::endl;
    } else {
        //std::cerr << "No " << std::endl;
    }
    fileSave = str;
}