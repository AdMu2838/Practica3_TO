#include "rectangulo.h"
using namespace std;
int main()
{
    // Instancias dinámicas con punteros inteligentes
    unique_ptr<Rectangulo> x = make_unique<Rectangulo>();
    cout << "Dibujar(): \n";
    x->Dibujar();

    unique_ptr<Rectangulo> y = make_unique<Rectangulo>(30, 5);
    cout << "Dibujar(30,5): \n";
    y->Dibujar();

    cout << "Dibujar(40,2): \n";
    x->Dibujar(40, 2);

    // Usando el constructor copia
    unique_ptr<Rectangulo> obj1 = make_unique<Rectangulo>(*x);
    cout << "Dibujar obj1 (constructor copia de x): \n";
    obj1->Dibujar();
    
    unique_ptr<Rectangulo> obj2 = make_unique<Rectangulo>(*y);
    cout << "Dibujar obj2 (constructor copia de y): \n";
    obj2->Dibujar();
    return 0;
}
