#ifndef CONCESIONARIO_ESTRUCTURAS_MODELO_H
#define CONCESIONARIO_ESTRUCTURAS_MODELO_H
#include <iostream>
#include "string"
using namespace std;

class Modelo {

private:
    Modelo *sig{};
    string nombre;
    int cilindraje;
    long precio;
    int galones;
    string color;
    string combustible;
public:
    Modelo(string,int,long,int,string,string);
    ~Modelo();
    void setSig(Modelo *);
    Modelo *getSig();
    string getNombre();
    int getCilidraje();
    long getPrecio();
    int getGalones();
    string getColor();
    string getCombustible();
};


#endif //CONCESIONARIO_ESTRUCTURAS_MODELO_H
