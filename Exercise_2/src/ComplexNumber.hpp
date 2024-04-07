#pragma once

#include <iostream>
#include <cmath>
#include <string>


using namespace std;

namespace ComplexNumberLibrary{

struct ComplexNumber
{

    double part_real;
    double part_imaginary;
    double c;


    ComplexNumber(double a, double b):
        part_real(a),
        part_imaginary(b)
    {    }


    ComplexNumber() = default;


    double to_double() const;


    ComplexNumber coniugate() const;   // definisco all'interno della mia struttura la funzione per coniugare


};
ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);    //operatore di somma

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2);            // operatore di confronto

ostream& operator<<(ostream& os, const ComplexNumber &c);                   // operatore di output
}

