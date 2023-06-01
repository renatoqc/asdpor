#include <iostream>
#include "articulo.h"
using namespace std;

// DefiniciÃ³n de la clase Maceta
class Maceta : public Articulo {
private:
    string tipo;
public:
    Maceta(string n, float p, int c, string l) : Articulo (n, p, c) {
        tipo = l;
    }
    void insuficientecantidad(int c) override
    {
        if (getCantidad() < c)
        {
            std::cout << "El vivero no tiene suficientes macetas.";
        }
    }
    string getTipo() {
        return tipo;
    }
};