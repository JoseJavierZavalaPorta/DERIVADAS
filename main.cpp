# #include <iostream>
#include <cmath>
#include <iomanip>
#include "Calculadora.h"
using namespace std;


int main() {
    Cderivada D1;

    double base;
    int exponente;

    cout <<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese el exponente: ";
    cin >> exponente;

    D1.setx(base);
    D1.setr(exponente);

    cout << "\n\n";
    cout << "La derivada es: " << D1.derivar();

    return 0;
}
