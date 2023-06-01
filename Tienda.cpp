#include <iostream>
#include <string>
#include "planta.h"
#include "vendedor.h"
#include "semilla.h"
#include "maceta.h"
#include "plagas.h"
#include "fertilizante.h"

using namespace std;

int main() {

    std::cout << "Bienvenido/a";
    std::cout << "\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.";
    std::cout << "\n:" << " IMPORTANTE INGRESAR LA HORA EN UN SOLO NUMERO EN LA MAÑANA DEL 1-12 Y  EN LA TARDE DE 13-23" << ":" << endl;
    std::cout << "-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-." << endl;
    std::cout << " " << endl;

    std::cout << "Ingrese su nombre: ";
    string nom_;
    std::cin >> nom_;

    std::cout << "Ingrese su apellido: ";
    string ape_;
    std::cin >> ape_;

    std::cout << "Hora de entrada: ";
    int entra_;
    std::cin >> entra_;

    Vendedor vendedor(entra_, 0, nom_, ape_);

    Planta plantas[15] = {
        Planta("Rosa", 20.0, 10, "Planta ornamental"),
        Planta("Margarita", 15.0, 5, "Planta ornamental"),
        Planta("Orquídea", 50.0, 3, "Planta ornamental"),
        Planta("Girasol", 18.0, 7, "Planta ornamental"),
        Planta("Crisantemo", 22.0, 4, "Planta ornamental"),
        Planta("Tulipán", 25.0, 6, "Planta ornamental"),
        Planta("Jazmín", 30.0, 2, "Planta ornamental"),
        Planta("Hortensia", 40.0, 5, "Planta ornamental"),
        Planta("Lirio", 28.0, 8, "Planta ornamental"),
        Planta("Clavel", 16.0, 9, "Planta ornamental"),
        Planta("Begonia", 12.0, 11, "Planta ornamental"),
        Planta("Geranio", 14.0, 12, "Planta ornamental"),
        Planta("Petunia", 18.0, 7, "Planta ornamental"),
        Planta("Azalea", 36.0, 2, "Planta ornamental"),
        Planta("Cactus", 10.0, 15, "Planta ornamental"),
    };

    Semilla semillas[5] = {
        Semilla("Semillas de Margarita", 2.0f, 5, "Semilla"),
        Semilla("Semillas de Orquídea", 5.0f, 14, "Semilla"),
        Semilla("Semillas de Rosa", 2.0f, 11, "Semilla"),
        Semilla("Semillas de Girasol", 1.8f, 6, "Semilla"),
        Semilla("Semillas de Crisantemo", 2.2f, 10, "Semilla")
    };

    Maceta macetas[4] = {
       Maceta("Maceta grande", 10.0, 6, "Maceta"),
       Maceta("Maceta mediana", 15.0, 8, "Maceta"),
       Maceta("Maceta pequeña", 20.0, 11, "Maceta"),
       Maceta("-",3.1f,5,"-")
    };

    Plaga plagas[3] = {
       Plaga("Insecticida", 10.0, 6, "Control de plagas"),
       Plaga("Fungicidas", 15.0, 8, "Control de plagas"),
       Plaga("Acaricidas", 20.0, 11, "Control de plagas"),
    };

    Fertilizante fertilizantes[3] = {
       Fertilizante("Abono granulado", 10.0, 6, "Fertilizante"),
       Fertilizante("Abono químico", 15.0, 8, "Fertilizante"),
       Fertilizante("Abono orgánico", 20.0, 11, "Fertilizante"),
    };

    int numero = 0;
    // Mostrar la lista de plantas y sus precios
    std::cout << "Listado de plantas en el vivero:" << endl;
    for (int i = 0; i < sizeof(plantas) / sizeof(Planta); i++) {
        std::cout << numero + 1 << ". " << plantas[i].getNombre() << " - Precio: $" << plantas[i].getPrecio() << ". " << plantas[i].getCantidad() << "Tipo: " << plantas[i].getTipo() << endl;
        numero++;
    }

    std::cout << endl << "Listado de semillas en el vivero:" << endl;
    for (int i = 0; i < sizeof(semillas) / sizeof(Semilla); i++) {
        std::cout << numero + 1 << ". " << semillas[i].getNombre() << " - Precio: $" << semillas[i].getPrecio() << ". " << semillas[i].getCantidad() << "Tipo: " << semillas[i].getTipo() << endl;
        numero++;
    }

    std::cout << endl << "Listado de macetas en el vivero:" << endl;
    for (int i = 0; i < sizeof(macetas) / sizeof(Maceta); i++) {
        std::cout << numero + 1 << ". " << macetas[i].getNombre() << " - Precio: $" << macetas[i].getPrecio() << ". " << macetas[i].getCantidad() << "Tipo: " << macetas[i].getTipo() << endl;
        numero++;
    }

    std::cout << endl << "Listado de fertilizantes en el vivero:" << endl;
    for (int i = 0; i < sizeof(fertilizantes) / sizeof(Fertilizante); i++) {
        std::cout << numero + 1 << ". " << fertilizantes[i].getNombre() << " - Precio: $" << fertilizantes[i].getPrecio() << ". " << fertilizantes[i].getCantidad() << "Tipo: " << fertilizantes[i].getTipo() << endl;
        numero++;
    }

    std::cout << endl << "Listado de artículos de control de plagas en el vivero:" << endl;
    for (int i = 0; i < sizeof(plagas) / sizeof(Plaga); i++) {
        std::cout << numero + 1 << ". " << plagas[i].getNombre() << " - Precio: $" << plagas[i].getPrecio() << ". " << plagas[i].getCantidad() << "Tipo: " << plagas[i].getTipo() << endl;
        numero++;
        }

    int cantidad;
    float total;
    bool seguirComprando = true;
    int opcion;
    
    while (seguirComprando) {
       
        std::cout << "Ingrese el número del elemento que desea comprar: ";
        std::cin >> opcion;
        

        if (opcion == 0) {
            seguirComprando = false;
            break;
        }
        opcion--;

        // Verificar si la opción ingresada es válida
        if (opcion >= 0 && opcion < sizeof(plantas) / sizeof(Planta) + sizeof(semillas) / sizeof(Semilla) + sizeof(macetas) / sizeof(Maceta) + sizeof(fertilizantes) / sizeof(Fertilizante) + sizeof(plagas) / sizeof(Plaga)) {
            if (opcion < sizeof(plantas) / sizeof(Planta)) {
                // Obtener la planta seleccionada en estos entra a planta crea una plantaSeleccionada y le pone todo lo de la planta seleccionada
                Planta plantaSeleccionada = plantas[opcion];
                std::cout << "Ha seleccionado la planta: " << plantaSeleccionada.getNombre() << std::endl;
                std::cout << "Hay " << plantaSeleccionada.getCantidad() << std::endl;
                std::cout << "Ingrese la cantidad que desea comprar: ";
                std::cin >> cantidad;
                plantaSeleccionada.insuficientecantidad(cantidad);
                total = cantidad * plantaSeleccionada.getPrecio();
                plantaSeleccionada.setCantidad(plantaSeleccionada.getCantidad() - cantidad);

            }
            else if (opcion < sizeof(plantas) / sizeof(Planta) + sizeof(semillas) / sizeof(Semilla)) {
                // Obtener la semilla seleccionada aca las semillas
                Semilla semillaSeleccionada = semillas[opcion - sizeof(plantas) / sizeof(Planta)];
                std::cout << "Ha seleccionado la semilla: " << semillaSeleccionada.getNombre() << std::endl;
                std::cout << "Hay " << semillaSeleccionada.getCantidad() << std::endl;
                std::cout << "Ingrese la cantidad que desea comprar: ";
                std::cin >> cantidad;
                semillaSeleccionada.insuficientecantidad(cantidad);
                total = cantidad * semillaSeleccionada.getPrecio();
                semillaSeleccionada.setCantidad(semillaSeleccionada.getCantidad() - cantidad);
            }
            else if (opcion < sizeof(plantas) / sizeof(Planta) + sizeof(semillas) / sizeof(Semilla) + sizeof(macetas) / sizeof(Maceta)) {
                // Obtener la maceta seleccionada aca macetas
                Maceta macetaSeleccionada = macetas[opcion - sizeof(plantas) / sizeof(Planta) - sizeof(semillas) / sizeof(Semilla)];
                std::cout << "Ha seleccionado la maceta: " << macetaSeleccionada.getNombre() << std::endl;
                std::cout << "Hay " << macetaSeleccionada.getCantidad() << std::endl;
                std::cout << "Ingrese la cantidad que desea comprar: ";
                std::cin >> cantidad;
                macetaSeleccionada.insuficientecantidad(cantidad);
                total = cantidad * macetaSeleccionada.getPrecio();
                macetaSeleccionada.setCantidad(macetaSeleccionada.getCantidad() - cantidad);
            }
            else if (opcion < sizeof(plantas) / sizeof(Planta) + sizeof(semillas) / sizeof(Semilla) + sizeof(macetas) / sizeof(Maceta) + sizeof(fertilizantes) / sizeof(Fertilizante)) {
                // Obtener el fertilizante seleccionado fertilizantes
                Fertilizante fertilizanteSeleccionado = fertilizantes[opcion - sizeof(plantas) / sizeof(Planta) - sizeof(semillas) / sizeof(Semilla) - sizeof(macetas) / sizeof(Maceta)];
                std::cout << "Ha seleccionado el fertilizante: " << fertilizanteSeleccionado.getNombre() << std::endl;
                std::cout << "Hay " << fertilizanteSeleccionado.getCantidad() << std::endl;
                std::cout << "Ingrese la cantidad que desea comprar: ";
                std::cin >> cantidad;
                fertilizanteSeleccionado.insuficientecantidad(cantidad);
                total = cantidad * fertilizanteSeleccionado.getPrecio();
                fertilizanteSeleccionado.setCantidad(fertilizanteSeleccionado.getCantidad() - cantidad);
            }
            else {
                // Obtener el artículo de control de plagas seleccionado
                Plaga plagaSeleccionada = plagas[opcion - sizeof(plantas) / sizeof(Planta) - sizeof(semillas) / sizeof(Semilla) - sizeof(macetas) / sizeof(Maceta) - sizeof(fertilizantes) / sizeof(Fertilizante)];
                std::cout << "Ha seleccionado el artículo de control de plagas: " << plagaSeleccionada.getNombre() << std::endl;
                std::cout << "Hay " << plagaSeleccionada.getCantidad() << std::endl;
                std::cout << "Ingrese la cantidad que desea comprar: ";
                std::cin >> cantidad;
                plagaSeleccionada.insuficientecantidad(cantidad);
                total = cantidad * plagaSeleccionada.getPrecio();
                plagaSeleccionada.setCantidad(plagaSeleccionada.getCantidad() - cantidad);
            }
        }
        else {
            std::cout << "Opción inválida. Por favor, seleccione un número válido." << std::endl;
        }
    }
    std::cout << "Compra realizada con éxito. Total a pagar: $" << total << endl;

    std::cout << "Hora de salida: ";
    int sali_;
    std::cin >> sali_;

    return 0;
}