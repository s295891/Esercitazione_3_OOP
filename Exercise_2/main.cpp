#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Definisco una funzione di appoggio che in output mi dica se due nuemri sono uguali, rispetto alla
// precisione di macchina impostata
void are_equal(const ComplexNumberLibrary::ComplexNumber &c1, const ComplexNumberLibrary::ComplexNumber &c2) {
    bool diff = (c1 == c2);
    if (diff) {
        cout << "I numeri c1 : "<<c1 <<" e " << c2  << "sono uguali" << endl;
    } else {
        cout  << "I numeri c1 : "<<c1 <<" e " << c2 << "sono diversi" << endl;
    }
}

int main()


{
    // SCRITTURA DI UN NUMERO COMPLESSO
    {
        ComplexNumberLibrary::ComplexNumber c(1.45e-7,-3.62e-4);
        cout << "Il numero complesso c vale : " << c << endl;
    }

    // SOMMA TRA DUE NUMERI COMPLESSI ENTRAMBI POSITIVI
    {
        ComplexNumberLibrary::ComplexNumber c1(1.2e-12, 3.4e-12);
        ComplexNumberLibrary::ComplexNumber c2(4e-12, 1e-12);
        ComplexNumberLibrary::ComplexNumber sum = c1 + c2;
        cout << "La somma  tra : " << c1<<endl << " e       " << c2 <<endl<< "vale : " << sum << endl;


    }
    // SOMMA TRA DUE NUMERI COMPLESSI ENTRAMBI NEGATIVI (SIA PARTE REALE CHE IMMAGINARIA)
    {
        ComplexNumberLibrary::ComplexNumber c1(-1.2e-12, -3.4e-12);
        ComplexNumberLibrary::ComplexNumber c2(-4e-12, -1e-12);
        ComplexNumberLibrary::ComplexNumber sum = c1 + c2;
        cout << "La somma  tra : " << c1<<endl << " e       " << c2<<endl << "vale : " << sum << endl;

    }

    // SOMMA TRA NUMERI "MISTI"
    {
        ComplexNumberLibrary::ComplexNumber c1(1.2e-12, -3.4e-12);
        ComplexNumberLibrary::ComplexNumber c2(4e-12, -1e-12);
        ComplexNumberLibrary::ComplexNumber sum = c1 + c2;
        cout << "La somma  tra : " << c1 << " e " << c2 << "vale : " << sum << endl;

    }
    //CONFRONTO TRA DUE NUMERI CHE SONO DIVERSI RISPETTO ALLA TOLLERANZA IMPOSTA
    {
        //mi sono costruito una funzione che in output mi dica se sono uguali oppure diversi, la tolleranza è impostata a 1.0e-10
        ComplexNumberLibrary::ComplexNumber c1(1.2e-2, 3.4e-9);
        ComplexNumberLibrary::ComplexNumber c2(4e-2, 1e-9);

        are_equal(c1,c2);

    }
    // CONFRONTO TRA DUE NUMERI CHE SONO UGUALI
    {
        ComplexNumberLibrary::ComplexNumber c1(1.2e-12, 3.4e-11);
        ComplexNumberLibrary::ComplexNumber c2(4e-12, 1e-11);

        are_equal(c1,c2);
    }
    // CONFRONTO TRA DUE NUMERI, CHE HANNO PARTE REALE DIVERSA MA IMMAGINARIA UGUALE
    {
        ComplexNumberLibrary::ComplexNumber c1(1.2e-2, 3.4e-11);
        ComplexNumberLibrary::ComplexNumber c2(4e-2, 1e-11);

        are_equal(c1,c2);
    }


    // CONIUGATO 1

    {
        ComplexNumberLibrary::ComplexNumber c1(1.2e-2, 3.4e-9);
        ComplexNumberLibrary::ComplexNumber c1_coniugate = c1.coniugate();
        cout << "il coniugato di " << c1 << " vale " << c1_coniugate << endl;
    }
    // CONIUGATO 2
    {
        ComplexNumberLibrary::ComplexNumber c1(-1.2e-12, -3.4e-12);
        ComplexNumberLibrary::ComplexNumber c1_coniugate = c1.coniugate();
        cout << "il coniugato di " << c1 << " vale " << c1_coniugate << endl;
    }




    return 0;
}
