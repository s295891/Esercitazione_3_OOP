#include "ComplexNumber.hpp"
#include <iostream>
#include <iomanip>

namespace ComplexNumberLibrary {


    ostream& operator<<(ostream& os, const ComplexNumber &c)         //operatore di output
    {
        os << scientific << setprecision(4);                        // definisco la notazione scientifica e la precisione

        if (c.part_imaginary > 0){

            os << c.part_real << " +" << c.part_imaginary << "i" << endl;
        }
        else if (c.part_imaginary < 0){

            os << c.part_real << " -" << abs(c.part_imaginary) << "i" << endl;

        }
        return os;
    }

    ComplexNumber ComplexNumber::coniugate() const{                     // funzione per restituirmi il coniugato
        return ComplexNumber(part_real, -part_imaginary);
    }


    ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2) {               //operatore di somma
        ComplexNumber c(c1.part_real + c2.part_real, c1.part_imaginary + c2.part_imaginary);
        return c;
        }

    bool operator==(const ComplexNumber &c1, const ComplexNumber &c2) {             //operatore di confronto
        double tol = 1e-10;             //tolleranza che può essere modificata a seconda della precisione richiesta
        ComplexNumber difference(abs(c1.part_real - c2.part_real), abs(c1.part_imaginary - c2.part_imaginary));
        return (difference.part_real < tol && difference.part_imaginary < tol);
    }

}
