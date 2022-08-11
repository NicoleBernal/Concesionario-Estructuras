#ifndef MARCA_H
#define MARCA_H

#pragma once
#include <iostream>
#include <string>
#include "Year.cpp"

using namespace std;
class Marca
{
private:
    string nomMarca;
    Marca *sig;
    Year *inicio;
public:
    Marca(string);
    ~Marca();
    void setNomMarca(string);
    string getNomMarca();
    void setSig(Marca *);
    Marca *getSig();
    void SetInicio(Year *);
    Year *getInicio();
    void insertarYear(int);
    //void insertarModelo(int);


};

#endif 