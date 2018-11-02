
#include "Calculadora.h"
#include <cmath>

double Cderivada::derivar() {
    int exponente, cociente;
    exponente = r-1;
    cociente = r;


    return (cociente*(pow(x,exponente)));

}
