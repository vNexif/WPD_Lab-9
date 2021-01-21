//
// Created by Nexif on 21/01/2021.
//

#include "Zadanie92.h"

void Zadanie92::Fetch_Vars() {
    std::cout << "Podaj a: ", std::cin >> this -> a;
    std::cout << "Podaj b: ", std::cin >> this -> b;
}


int_fast32_t Zadanie92::Add_Numbs(int_fast32_t x, int_fast32_t y) {
    int_fast32_t sum{0};
    sum = x + y;
    return sum;
}

Zadanie92::Zadanie92() {
    this -> Fetch_Vars();
    std::cout << this -> Add_Numbs(this -> a,this -> b) << std::endl;
    exit(0);
}


