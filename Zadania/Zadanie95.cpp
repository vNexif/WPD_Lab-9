//
// Created by Nexif on 21/01/2021.
//

#include "Zadanie95.h"

int_fast32_t Zadanie95::Fetch_Variable() {
    int_fast32_t n{0};
    std::cout << "Podaj ilosc liczb: ", std::cin >> n;
    return n;
}

void Zadanie95::Calc_Avg(int_fast32_t n) {
    for (int i = 0; i < n; ++i) {
        int_fast32_t x{0};
        std::cout << "Podaj wartosc: ", std::cin >> x;
        this -> avg += x;
    }
    this -> avg = this -> avg / n;
}


void Zadanie95::Print_Avg() const {
    std::cout << this -> avg << std::endl;
}

Zadanie95::Zadanie95() {
    this -> Calc_Avg( this -> Fetch_Variable() );
    this -> Print_Avg();
}



