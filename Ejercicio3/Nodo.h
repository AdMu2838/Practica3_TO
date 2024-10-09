#ifndef NODO_H
#define NODO_H
#include <memory>
#include <iostream>
using namespace std;
class Nodo
{
public:
    int valor;
    shared_ptr<Nodo> siguiente;
    weak_ptr<Nodo> anterior;
    Nodo(int val) : valor(val), siguiente(nullptr), anterior() {}

    ~Nodo() {
        cout << "Nodo destruido\n";
    }
};
#endif
