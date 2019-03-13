#include <iostream>
using namespace std;

enum TipoBici:int {Paseo, Montania};

class DtVehiculo {
  public:
    int nroSerie;
    float porcentaje,precioBase;
    // void imprimir_datos() {std::cout << nroSerie << '\n'<< porcentaje << '\n'<< precioBase;};
 };
class DtMonopatin: public DtVehiculo {
  public:
    bool tieneLuces;
 };

class DtBicicleta: public DtVehiculo {
  public:
    TipoBici tipo;
    int cantCambios;

    
    // void imprimir_datos() {imprimir_datos }
  };

int main () {
  DtBicicleta bici;
  bici.nroSerie = 1;
  bici.porcentaje = 100;
  bici.precioBase = 5000;
  bici.tipo = Paseo;
  bici.cantCambios = 6;
  // automovil.imprimir_datos();
}
