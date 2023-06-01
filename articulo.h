#pragma once
#include <iostream>
#include <string>

class Articulo {
private:
    std::string nombre;
    float precio;
    int cantidad;
 
public:
    Articulo() = default;
    Articulo(const std::string& nombre_, float precio_, int cantidad_)
    {
        nombre = nombre_;
        precio = precio_;
        cantidad = cantidad_;
    }

    void setPrecio(float pre_) {
        precio = pre_;
    }
    std::string getNombre() {
        return nombre;
    }
    float getPrecio() {
        return precio;
    }
    int getCantidad() {
        return cantidad;
    }
     void setCantidad(int c) {
        cantidad = c;
    }
    virtual void insuficientecantidad(int c)
    {
        if (getCantidad() < c)
        {
            std::cout << "El vivero no tiene suficientes articulos.";
        }
    }
};