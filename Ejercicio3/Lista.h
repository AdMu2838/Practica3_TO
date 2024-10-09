#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <memory>
using namespace std;
class Lista
{
private:
    shared_ptr<Nodo> head; 
    shared_ptr<Nodo> tail; 
    public:
    Lista();
    ~Lista();

    void copiaArreglo(int arreglo[], int size);
    
    void imprimeAdelante() const;
    
    void imprimeAtras() const;
    
    shared_ptr<Nodo> buscarDesdeAdelante(int valor) const;
    
    shared_ptr<Nodo> buscarDesdeAtras(int valor) const;
};
#endif 