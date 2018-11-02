#include <string>

class Cderivada
{
private:
    double x;
    int r;
public:
    double derivar();

    //----metodos de acceso
    //--- setter  que permiten asignar un valor al atributo
    void setx(double _x) { x= _x; }
    void setr(int _r) {  r= _r; }
    //--- getters

};
