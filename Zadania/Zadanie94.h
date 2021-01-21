//
// Created by Nexif on 21/01/2021.
//

#ifndef LAB_9_ZADANIE94_H
#define LAB_9_ZADANIE94_H

#include "iostream"

class Zadanie94 {
public:
    Zadanie94();

private:
    int_fast32_t width{0};
    char sign{0};

    void Fetch_Vars();
    void Print_Stuff() const;
};


#endif //LAB_9_ZADANIE94_H
