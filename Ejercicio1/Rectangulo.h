#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>
#include <memory> // para std::unique_ptr
typedef unsigned short int USHORT;
using namespace std;
class Rectangulo
{
    private:
        unique_ptr<USHORT> miancho;
        unique_ptr<USHORT> mialto;
        unique_ptr<int> val1, val2, val3;
    public:
        Rectangulo(); // Constructor por defecto
        Rectangulo(USHORT ancho, USHORT alto);
        Rectangulo(const Rectangulo& R);
        ~Rectangulo() {} // Destructor
        
        void Dibujar();
        void Dibujar(USHORT xancho, USHORT xalto);
};
#endif