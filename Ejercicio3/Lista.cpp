#include "lista.h"
#include <iostream>
using namespace std;
Lista::Lista() : head(nullptr), tail(nullptr)
{
    cout << "Constructor por defecto de Lista\n";
}
Lista::~Lista()
{
    cout << "Destructor de Lista\n";
}
void Lista::copiaArreglo(int arreglo[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        shared_ptr<Nodo> nuevoNodo =
        make_shared<Nodo>(arreglo[i]);
        if (!head)
        {
        head = nuevoNodo;
        tail = nuevoNodo;
        }
        else
        {
        tail->siguiente = nuevoNodo;
        nuevoNodo->anterior = tail;
        tail = nuevoNodo;
        }
    }
}
void Lista::imprimeAdelante() const
{
    shared_ptr<Nodo> actual = head;
    cout << "Lista (Adelante): ";
    while (actual)
    {
        cout << actual->valor << " ";
        actual = actual->siguiente;
    }
    cout << "\n";
}
void Lista::imprimeAtras() const
{
    shared_ptr<Nodo> actual = tail;
    cout << "Lista (Atrás): ";
    while (actual)
    {
        cout << actual->valor << " ";
        actual = actual->anterior.lock(); 
    }
    cout << "\n";
}
shared_ptr<Nodo> Lista::buscarDesdeAdelante(int valor) const
{
    shared_ptr<Nodo> actual = head;
    while (actual)
    {
        if (actual->valor == valor)
        return actual;
        actual = actual->siguiente;
    }
    return nullptr; 
}
shared_ptr<Nodo> Lista::buscarDesdeAtras(int valor) const
{
    shared_ptr<Nodo> actual = tail;
    while (actual)
    {
        if (actual->valor == valor)
        return actual;
        actual = actual->anterior.lock(); 
    }
    return nullptr; 
}
