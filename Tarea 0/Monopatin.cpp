#include "Monopatin.hpp"

//constructores
Monopatin::Monopatin (){
	new boolean tieneluces = false;
}

Monopatin::Monopatin(bool tl){
    new bool tieneLuces = tl;
}

Monopatin::~Monopatin(){
    delete tieneLuces;
}

//set y get
Monopatin::setTieneLuces(bool tl){
    this.tieneLuces = tl;
}

bool Monopatin::getTieneLuces(){
    return tieneLuces;
}

//

 float Vehiculo::darPrecioViaje(int duracion, int distancia){
    if tieneLuces {
        precio = 0.5 * duracion + distancia * precioBase;
    } else {
        precio = distancia * precioBase;
    }
    return precio;
 }
