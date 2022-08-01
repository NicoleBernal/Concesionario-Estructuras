#ifndef MULTILISTA_H
#define MULTILISTA_H
#include "Caracteristicas.cpp"
#include "Marca.cpp"
#include "Modelo.cpp"
#include "iostream"
#include "string"

#pragma once
using namespace std;
class MultiLista
{
public:
    MultiLista();
    ~MultiLista();
    Marca *getCabecera();
    void insertarMarca(string);
    void insertarModelo(string,string);
    void insertarCaracteristica(string,string,string);
    void mostrarMultilista();

private:
    Marca *cabecera;

};

#endif