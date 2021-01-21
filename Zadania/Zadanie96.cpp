//
// Created by Nexif on 21/01/2021.
//

#include "Zadanie96.h"

int_fast32_t Zadanie96::Fetch_N() {
    int_fast32_t n{0};
    std::cout << "Podaj stopien wielomianu: ", std::cin >> n;
    return n;
}

int_fast32_t Zadanie96::Calc_FX(int_fast32_t n) {

    //Fetch Additional Vars.
    std::cout << "Podaj argument x: ", std::cin >> this -> x;

    for (int i = 0; i <= n; ++i) {
        int_fast32_t a{0};
        std::cout << "Podaj wspolczynnik " << i << " :", std::cin >> a;
        As.push_back(a);
    }


    //Calc

    for (int_fast32_t i = 0; i <= n; ++i) {
        this -> Output += this -> As[i] * pow(this -> x, n-i);
    }
    return this -> Output;
}

void Zadanie96::ShowVec() {
    for (int i = 0; i < this -> As.size(); ++i) {
        std::cout << As[i] << " ";
    }
}

Zadanie96::Zadanie96() {
    std::cout << "Funkcja przy podanych zmiennych jest rowna: " << this -> Calc_FX( this -> Fetch_N() );

    std::exit(0);
}
