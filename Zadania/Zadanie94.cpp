//
// Created by Nexif on 21/01/2021.
//

#include "Zadanie94.h"

void Zadanie94::Fetch_Vars() {
    std::cout << "Podaj szerokosc: ", std::cin >> this -> width;
    std::cout << "Podaj znak: ", std::cin >> this -> sign;
}

void Zadanie94::Print_Stuff() const {
    for (int i = 0; i < this -> width; ++i) {
        std::cout << this -> sign;
    }
    std::cout << std::endl;
}

Zadanie94::Zadanie94() {
    this -> Fetch_Vars();
    this -> Print_Stuff();
    exit(0);
}
