#ifndef MARCA_H
#define MARCA_H

#pragma once
#include <iostream>
#include <string>
#include "Modelo.cpp"

using namespace std;
class Marca
{
public:
    Marca(string);
    ~Marca();
    void setNomMarca(string);
    string getNomMarca();
    void setSig(Marca *);
    Marca *getSig();
    void SetInicio(Modelo *);
    Modelo *getInicio();
    void insertarModelo(string);



private:
    string nomMarca;
    Marca *sig;
    Modelo *inicio;

};

#endif 