
#include "Modelo.h"

Modelo::Modelo(string d1, int d2,long d3,int d4,string d5,string d6) {
this->nombre=d1;
this->cilindraje=d2;
this->precio=d3;
this->galones=d4;
this->color=d5;
this->combustible=d6;

}
Modelo::~Modelo() {

}
void Modelo::setSig(Modelo *data) {
    this->sig=data;
}
Modelo *Modelo::getSig() {
    return this->sig;
}
string Modelo::getNombre() {
   return this->nombre;
}

int Modelo::getCilidraje() {
    return this->cilindraje;
}

long Modelo::getPrecio() {
    return this->precio;
}

string Modelo::getColor() {
    return this->color;
}

string Modelo::getCombustible() {
    return this->combustible;
}

int Modelo::getGalones() {
    return this->galones;
}
