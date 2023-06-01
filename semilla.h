#include <iostream>
#include "articulo.h"
using namespace std;

// DefiniciÃ³n de la clase Semilla
class Semilla : public Articulo {
private:
    string tipo;
public:
    Semilla(string n, float p, int c, string l) : Articulo (n, p, c) {
        tipo = l;
    }
    void insuficientecantidad(int c) override
    {
        if (getCantidad() < c)
        {
            std::cout << "El vivero no tiene suficientes semillas.";
        }
    }
    string getTipo() {
        return tipo;
    }
};