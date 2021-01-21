//
// Created by Nexif on 25/11/2020.
//

#include <iostream>
#include "Menu/menu.h"
#include "Zadania/Zadanie91.h"
#include "Zadania/Zadanie92.h"
#include "Zadania/Zadanie93.h"
#include "Zadania/Zadanie94.h"
#include "Zadania/Zadanie95.h"
#include "Zadania/Zadanie96.h"
#include "Zadania/Zadanie97.h"

void globalCallback(int option) {
    std::cout << "Global Callback | Zadanie : " << option << std::endl;
}

void blankiBoi() {
    std::cerr << "I'm blank :)" << std::endl;
    exit(0);
}

void zadanie1() {
    std::cout << "Zadanie 1" << std::endl;
    Zadanie91();
}

void zadanie2() {
    std::cout << "Zadanie 2" << std::endl;
    Zadanie92();
}

void zadanie3() {
    std::cout << "Zadanie 3" << std::endl;
    Zadanie93();
}

void zadanie4() {
    std::cout << "Zadanie 4" << std::endl;
    Zadanie94();
}

void zadanie5(){
    std::cout << "Zadanie 5" << std::endl;
    Zadanie95();
}

void zadanie6(){
    std::cout << "Zadanie 6" << std::endl;
    Zadanie96();
}

void zadanie7(){
    std::cout << "Zadanie 7" << std::endl;
    Zadanie97();
}

int main(int argc, const char * argv[]) {


    // Menu with header and global callbacks
    Menu zadania("Select task:", &globalCallback);

    zadania.addItem("Blank", &blankiBoi);
    zadania.addItem("Zadanie 1", &zadanie1);
    zadania.addItem("Zadanie 2", &zadanie2); // You can have global callback and individual callbacks
    zadania.addItem("Zadanie 3", &zadanie3);
    zadania.addItem("Zadanie 4", &zadanie4);
    zadania.addItem("Zadanie 5", &zadanie5);
    zadania.addItem("Zadanie 6", &zadanie6);
    zadania.addItem("Zadanie 7", &zadanie7);

    zadania.printMenu();

    return 0;
}