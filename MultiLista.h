#ifndef MULTILISTA_H
#define MULTILISTA_H
#include "Marca.cpp"
#include "iostream"
#include "string"

#pragma once
using namespace std;
class MultiLista
{
private:
    Marca *cab;
    Year *cabYear;
public:
    MultiLista();
    ~MultiLista();
    Marca *getCabecera();
    Year *getCab();
    void insertarMarca(string);
    Marca *buscarMarca(string);
    void insertarYear(string, int);
    Year *buscarYear(string,int);
    void insertarModelo(string, int, string,int,long,int,string,string);
    void mostrarMultilista();

};

#endif