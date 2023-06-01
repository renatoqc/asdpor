#include <iostream>
#include "articulo.h"
using namespace std;

// DefiniciÃ³n de la clase Plaga
class Plaga : public Articulo {
private:
    string tipo;
public:
    Plaga(string n, float p, int c, string l) : Articulo (n, p, c){
        tipo = l;
    }
    void insuficientecantidad(int c) override
    {
        if (getCantidad() < c)
        {
            std::cout << "El vivero no tiene suficientes articulos para control de plagas.";
        }
    }
    string getTipo() {
        return tipo;
    }
};