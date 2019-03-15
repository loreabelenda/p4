#include <iostream>

#include "Vehiculo.hpp"
using namespace std;
//constructores
Vehiculo::Vehiculo (){
	new int nroSerie = 0;
	new float porcentajeBateria = 0;
    new float precioBase = 0;
}

Vehiculo::Vehiculo(int n, float p, float pb){
    new int nroSerie = n;
	new float porcentajeBateria = p;
    new float precioBase = pb;
}

Vehiculo::~Vehiculo(){
    delete nroSerie;
    delete porcentajeBateria;
    delete precioBase;
}

//set y get
Vehiculo::setNroSerie(int n){
    this.nroSerie = n;
}

Vehiculo::setPorcentajeBateria(float p){
    this.porcentajeBateria = p;
}

Vehiculo::setPrecioBase(float pb){
    this.precioBase = pb;
}

int Vehiculo::getNroSerie(){
    return nroSerie;
}

float Vehiculo::getPorcentajeBateria(){
    return porcentajeBateria;
}

float Vehiculo::getPrecioBase(){
    return precioBase;
}

//

 float Vehiculo::darPrecioViaje(int duracion, int distancia){
 }
