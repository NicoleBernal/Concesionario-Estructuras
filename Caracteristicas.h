#ifndef CARACTERISTICAS_H
#define CARACTERISTICAS_H
#include <iostream>
#include "string"


#pragma once
using namespace std;
class Caracteristicas
{
public:
    Caracteristicas();
    ~Caracteristicas();
    int cilindraje;
    long precio;
    int galones;
    string color;
    string combustible;
    int año;

    int *getCilidraje();

private:
    


};

#endif