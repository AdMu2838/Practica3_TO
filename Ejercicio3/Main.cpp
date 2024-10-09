#include "lista.h"
#include <iostream>
using namespace std;
int main()
{
    int arreglo[] = { 1,2,3,4,5,6,7,8,9,10 };
    const int longitud = sizeof(arreglo) / sizeof(*arreglo);
    Lista lista1; 
    lista1.copiaArreglo(arreglo, longitud);

    lista1.imprimeAdelante(); 
    lista1.imprimeAtras(); 

    int valorBusqueda = 5;
    shared_ptr<Nodo> encontrado =
    lista1.buscarDesdeAdelante(valorBusqueda);
    if (encontrado)
        cout << "Valor " << valorBusqueda << " encontrado desde adelante.\n";
    else
        cout << "Valor " << valorBusqueda << " NO encontrado desde adelante.\n";
    
    valorBusqueda = 11;
    encontrado = lista1.buscarDesdeAtras(valorBusqueda);
    if (encontrado)
        cout << "Valor " << valorBusqueda << " encontrado desde atrás.\n";
    else
        cout << "Valor " << valorBusqueda << " NO encontrado desde atrás.\n";

    return 0;
}