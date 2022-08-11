#include "MultiLista.h"

MultiLista::MultiLista()
{
    this->cab=NULL;
}

MultiLista::~MultiLista()
{

}

Marca *MultiLista::getCabecera(){
    return cab;
}
Year *MultiLista::getCab(){
    return cabYear;
}
void MultiLista::insertarMarca(string nom)
{
    Marca *nuevo= new Marca(nom);
    if(this->cab ==NULL){
        this->cab=nuevo;
    }
    else{
        Marca *aux=this->cab;
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
            nuevo->setSig(cab);
            cab=nuevo;
        }
            else{
                nuevo->setSig(aux);
                ant->setSig(nuevo);
            }
                
    }
}
Marca *MultiLista::buscarMarca(string marca){
    Marca *aux = this->getCabecera();
    while (aux != NULL && aux->getNomMarca() != marca){
        aux = aux->getSig();
    }
    if (aux != NULL) return aux;
    else return NULL;
}

void MultiLista::insertarYear(string dMarca, int dYear) {
    Marca *nmarca = buscarMarca(dMarca);
    if (nmarca != NULL){
        nmarca->insertarYear(dYear);
    }
}

Year *MultiLista::buscarYear(string dMarca, int dYear) {
    Marca *aux = this->getCabecera();
    while (aux != NULL && aux->getNomMarca() == dMarca){
        Year *temp=this->getCab();
        while(temp!=NULL && temp->getInfo()!=dYear){
            temp=temp->getSig();
        }
        if (temp != NULL) return temp;
        else return NULL;
        aux = aux->getSig();
    }


}

void MultiLista::insertarModelo(string dMarca, int dYear, string d1, int d2, long d3, int d4, string d5, string d6) {
    Marca *nmarca= buscarMarca(dMarca);
    if (nmarca != NULL){
        Year *carac=buscarYear(dMarca,dYear);
        if(carac!=NULL){
            carac->inserModelo(d1,d2,d3,d4,d5,d6);
        }
    }
}


