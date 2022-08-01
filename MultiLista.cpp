#include "MultiLista.h"

MultiLista::MultiLista()
{
    this->cabecera=NULL;
}

MultiLista::~MultiLista()
{

}

Marca *MultiLista::getCabecera(){
    return cabecera;
}
void MultiLista::insertarMarca(string nom)
{
    Marca *nuevo= new Marca(nom);
    if(this->cabecera ==NULL){
        this->cabecera ==nuevo;
    }
    else{
        Marca *aux=this->cabecera;
        Marca *ant=NULL;
        while (aux!=NULL && aux->getNomMarca()<= nom)
        {
            ant=aux;
            aux=aux->getSig();
        }
        if(aux==NULL){
            ant->setSig(nuevo);
        }
        else if(ant==NULL){
            nuevo->setSig();
            cabecera=nuevo;
        }
            else{
                nuevo->setSig(aux);
                cabecera=nuevo;
            }
                
    }
}

