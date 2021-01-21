//
// Created by Nexif on 21/01/2021.
//

#ifndef LAB_9_ZADANIE97_H
#define LAB_9_ZADANIE97_H

#include "iostream"

class Zadanie97 {
public:
    Zadanie97();

private:
    int x{0};
    void GetX();
    static int GetLastValue(int x);
    static int ByeLastValue(int x);
    int suma_cyfr(int liczba);
};


#endif //LAB_9_ZADANIE97_H
