/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Arbol
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 17/02/2022
   Fecha de modificación: 17/02/2022
*/
#include <iostream>
#include <stdio.h>
using namespace std;
class Nodo
{
private:

public:
    void setDato(int);
    void setIzquierda(Nodo*);
    void setDerecha(Nodo*);
    int getDato();
    Nodo*& getIzquierda();
    Nodo*& getDerecha();
    int dato;
    Nodo* izquierda;
    Nodo* derecha;
    int altura;
    /*devuelve la informacion del nodo*/
};
Nodo* raiz = NULL;

void Nodo::setDato(int _dato) {
    dato = _dato;
}
void Nodo::setIzquierda(Nodo* _izquierda) {
    izquierda = _izquierda;
}
void Nodo::setDerecha(Nodo* _derecha) {
    derecha = _derecha;
}
int Nodo::getDato() {
    return dato;
}
Nodo*& Nodo::getIzquierda() {
    return izquierda;
}
Nodo*& Nodo::getDerecha() {
    return derecha;
}