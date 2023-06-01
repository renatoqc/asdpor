#include <iostream>
#include "articulo.h"
using namespace std;


class Fertilizante : public Articulo{
private:
    string tipo;
public:
    Fertilizante(string n, float p, int c, string l) : Articulo (n, p, c) {
        tipo = l;
    }
    void insuficientecantidad(int c) override
    {
        if (getCantidad() < c)
        {
            std::cout << "El vivero no tiene suficientes fertilizantes.";
        }
    }
    string getTipo() {
        return tipo;
    }
};