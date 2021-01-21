//
// Created by Nexif on 21/01/2021.
//

#ifndef LAB_9_ZADANIE95_H
#define LAB_9_ZADANIE95_H

#include "iostream"

class Zadanie95 {
public:
    Zadanie95();

private:

    int_fast32_t avg{0};

    static int_fast32_t Fetch_Variable();

    void Calc_Avg(int_fast32_t n);

    void Print_Avg() const;
};


#endif //LAB_9_ZADANIE95_H
