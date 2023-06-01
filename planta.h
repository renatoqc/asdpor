#include <iostream>
#include "articulo.h"
using namespace std;

// DefiniciÃ³n de la clase Planta
class Planta : public Articulo {
private:
    string tipo;
public:
    Planta(const string& n, float p, int c, string l) : Articulo(n, p, c) {
        tipo = l;
    }
    void insuficientecantidad(int c) override
    {
        if (getCantidad() < c)
        {
            std::cout << "El vivero no tiene suficientes plantas.";
        }
    }
    string getTipo() {
        return tipo;
    }
};