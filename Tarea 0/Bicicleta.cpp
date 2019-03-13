#include "Bicicleta.hpp"

//constructores
Bicicleta::Bicicleta (){
}

Bicicleta::Bicicleta(TipoBici t, int cantc){
    new TipoBici tipo = t;
    new int cantCambios = cantc;
}

Bicicleta::~Bicicleta(){
    delete tipo;
    delete cantCambios;
}

//set y get
Bicicleta::setTipo(TipoBici t){
    this.TipoBici = t;
}

Bicicleta::setCantCambios(int cant){
    this.cantCambios = cant;
}

TipoBici Bicicleta::getTipo(){
    return tipo;
}

int Bicicleta::getCantCambios(){
    return cantCambios;
}

//

 float Vehiculo::darPrecioViaje(int duracion, int distancia){
    precio = precioBase * distancia;
    return precio;
 }
