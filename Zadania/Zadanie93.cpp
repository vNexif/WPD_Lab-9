//
// Created by Nexif on 21/01/2021.
//

#include "Zadanie93.h"

void Zadanie93::Get_Values() {
    std::cout << "Podaj a", std::cin >> this -> a;
    std::cout << "Podaj b", std::cin >> this -> b;
}


int_fast32_t Zadanie93::Calc_Variable() {
    this -> w = pow(this -> a, 2) + this -> b/2;
    return w;
}

Zadanie93::Zadanie93() {
    this -> Get_Values();
    std::cout << "Wynik to: <<" << this -> Calc_Variable() << std::endl;
}

