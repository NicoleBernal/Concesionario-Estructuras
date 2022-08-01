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
    return nomMarca;
}
void Marca::setSig(Marca *marca){
    this->sig=marca;
}
Marca *Marca::getSig(){
    return this->sig;
}
void Marca::SetInicio(Modelo *mod){
    this->inicio=mod;
}
Modelo *Marca::getInicio(){
    return inicio;
}
void Marca::insertarModelo(string mod){
    Modelo *nuevo=new Modelo(mod);
    if (this->inicio==NULL)
    {
        this->SetInicio(nuevo);
    }
    
}
