#include "rectangulo.h"
using namespace std;
Rectangulo::Rectangulo()
{
    cout << "constructor por defecto\n";
    miancho = make_unique<USHORT>(10);
    mialto = make_unique<USHORT>(2);
    val1 = make_unique<int>(0);
    val2 = make_unique<int>(0);
    val3 = make_unique<int>(0);
}
// Constructor parametrizado
Rectangulo::Rectangulo(USHORT ancho, USHORT alto)
{
    cout << "constructor normal\n";
    miancho = make_unique<USHORT>(ancho);
    mialto = make_unique<USHORT>(alto);
    val1 = make_unique<int>(0);
    val2 = make_unique<int>(0);
    val3 = make_unique<int>(0);
}
// Constructor copia
Rectangulo::Rectangulo(const Rectangulo &R)
{
    cout << "constructor copia\n";
    miancho = make_unique<USHORT>(*R.miancho);
    mialto = make_unique<USHORT>(*R.mialto);
    val1 = make_unique<int>(*R.val1);
    val2 = make_unique<int>(*R.val2);
    val3 = make_unique<int>(*R.val3);
}
// Función Dibujar
void Rectangulo::Dibujar()
{
    *val1 = 1;
    *val2 = 4;
    *val3 = 8;
    Dibujar(*miancho, *mialto);
}
// Sobrecarga de Dibujar
void Rectangulo::Dibujar(USHORT ancho, USHORT alto)
{
    for (USHORT i = 0; i < alto; i++)
    {
        for (USHORT j = 0; j < ancho; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}