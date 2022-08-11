#include "Year.h"

Year::Year(int dato)
{
this->info=dato;
this->year=NULL;
this->model=NULL;
}

Year::~Year()
{

}
void Year::setInfo(int dato) {
    this->info=dato;
}
int Year::getInfo() {
    return this->info;
}
void Year::setSig(Year *dato1){
    this->year=dato1;
}

Year *Year::getSig() {
    return this->year;
}
void Year::setInicio(Modelo *dato2){
    this->model=dato2;
}
Modelo *Year::getInicio(){
    return this->model;
}
void Year::imprimir() {
    cout<<this->getInfo();
}
void Year::inserModelo(string d1, int d2,long d3,int d4,string d5,string d6){
    Modelo *nuevo = new Modelo(d1,d2,d3,d4,d5,d6); // AQUI QUEDE
    if (this->model == NULL){
        this->setInicio(nuevo);
    }else {
        Modelo *aux = this->model;
        Modelo *ant = NULL;
        while (aux != NULL && aux->getNombre() <= d1){
            ant = aux;
            aux = aux->getSig();
        }
        if (aux == NULL){
            ant->setSig(nuevo);
        }else if (ant == NULL){
            nuevo->setSig(model);
            model = nuevo;
        }else {
            nuevo->setSig(aux);
            ant->setSig(nuevo);

        }
    }
}

void Year::buscarModelo(string){

}
void Year::extraerModelo(string){

}