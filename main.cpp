#include <iostream>
#include "MultiLista.cpp"
using namespace std;

int main() {
    MultiLista *multi= new MultiLista();

    multi->insertarMarca("Toyota");
    multi->insertarMarca("Audi");
    multi->insertarMarca("BMW");
    multi->insertarMarca("Ford");
    multi->insertarYear("Toyota",2018);
    multi->insertarYear("Toyota",2019);
    multi->insertarYear("Toyota",2020);
    multi->insertarYear("Audi",2018);
    multi->insertarYear("Audi",2019);
    multi->insertarYear("Audi",2020);
    multi->insertarYear("BMW",2018);
    multi->insertarYear("BMW",2019);
    multi->insertarYear("BMW",2020);
    multi->insertarYear("Ford",2018);
    multi->insertarYear("Ford",2019);
    multi->insertarYear("Ford",2019);
    //multi->insertarModelo("Toyota",2018,"Hilux",170,120,80,"gris","gasolina");

    std::cout << "Hello, World!" << endl;

    return 0;
}
