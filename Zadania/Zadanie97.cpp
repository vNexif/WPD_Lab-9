//
// Created by Nexif on 21/01/2021.
//

#include "Zadanie97.h"

void Zadanie97::GetX() {
    std::cout << "Podaj liczbe: ", std::cin >> this -> x;
}

int Zadanie97::GetLastValue( int y ) {
    int x{0};
    x = y % 10;
    return x;
}

int Zadanie97::ByeLastValue( int y ) {
    int x{0};
    x = y / 10;
    return x;
}

int Zadanie97::suma_cyfr( int liczba ) {
    int suma{0};

    do {
        suma += GetLastValue(liczba);
        liczba = ByeLastValue(liczba);
    } while (liczba != 0);


    return suma;
}

Zadanie97::Zadanie97() {
    this -> GetX();
    std::cout << "Suma cyfr wynosi: " << suma_cyfr( this -> x ) << std::endl;
}




