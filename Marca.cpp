#include "Marca.h"

using namespace std;
Marca::Marca(string nom)
{
    this->nomMarca=nom;
    this->sig=NULL;
    this->inicio=NULL;
}

Marca::~Marca()
{
     
}

void Marca::setNomMarca(string nom){
    this->nomMarca=nom;
}

string Marca::getNomMarca(){
    return this->nomMarca;
}
void Marca::setSig(Marca *marca){
    this->sig=marca;
}
Marca *Marca::getSig(){
    return this->sig;
}
void Marca::SetInicio(Year *mod){
    this->inicio=mod;
}
Year *Marca::getInicio(){
    return inicio;
}
void Marca::insertarYear(int mod){
    Year *nuevo=new Year(mod);
    if (this->inicio==NULL)
    {
        this->SetInicio(nuevo);
    } else{
        Year *aux = this->inicio;
        Year *ant = NULL;
        while (aux != NULL && aux->getInfo() <= mod){
            ant = aux;
            aux = aux->getSig();
        }
        if (aux == NULL){
            ant->setSig(nuevo);
        }else if (ant == NULL){
            nuevo->setSig(inicio);
            inicio = nuevo;
        }else {
            nuevo->setSig(aux);
            ant->setSig(nuevo);

        }
    }
    
}
