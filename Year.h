#ifndef YEAR_H
#define YEAR_H

#pragma once
#include "string"
#include "Modelo.h"

class Year
{
private:
    int info;
    Year *year;  //---->sig
    Modelo *model; //--->inicio

public:
    Year(int);
    ~Year();
    void setInfo(int);
    int getInfo();
    void setSig(Year *);
    Year *getSig();
    void setInicio(Modelo *);
    Modelo *getInicio();
    void inserModelo(string,int,long,int,string,string);
    void buscarModelo(string);
    void extraerModelo(string);
    void imprimir();

};

#endif