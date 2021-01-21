//
// Created by Nexif on 21/01/2021.
//

#ifndef LAB_9_ZADANIE96_H
#define LAB_9_ZADANIE96_H

#include "iostream"
#include "cmath"
#include "vector"

class Zadanie96 {
public:
    Zadanie96();

private:

    int_fast32_t x{0}, Output{0};
    std::vector<int_fast32_t> As{};

    static int_fast32_t Fetch_N();

    int_fast32_t Calc_FX(int_fast32_t n);

    void ShowVec();
};


#endif //LAB_9_ZADANIE96_H
