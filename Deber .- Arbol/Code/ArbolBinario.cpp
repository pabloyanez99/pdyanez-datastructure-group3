/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Arbol
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 17/02/2022
   Fecha de modificación: 17/02/2022
*/
#include "Arbol.h"
Nodo* arbol = NULL;
void subMenu() {
    Arbol objArbol;
    int subOpcion = 0;
    while (subOpcion != 4) {
        cout << "\n*****************************************";
        cout << "\n 1.-Preorden";
        cout << "\n 2.-Inorden";
        cout << "\n 3.-Postorden";
        cout << "\n 4.-Regresar";
        cout << "\n\nDigite una opcion: ";
        cout << "\n*****************************************";
        cin >> subOpcion;
        system("cls");
        if (subOpcion == 1) {
            objArbol.preOrden(arbol);
            cout << endl;
            system("pause");
            system("cls");
        }
        else if (subOpcion == 2) {
            objArbol.inOrden(arbol);
            cout << endl;
            system("pause");
            system("cls");
        }
        else if (subOpcion == 3) {
            objArbol.postOrden(arbol);
            cout << endl;
            system("pause");
            system("cls");
        }
    }
}
void menu() {
    Arbol objArbol;
    int contador = 0, opcion = 0, dato = 0;
    while (opcion != 6) {
        cout << "\n*****************************************";
        cout << "\n 1.-Insertar nodo";
        cout << "\n 2.-Mostrar arbol";
        cout << "\n 3.-Buscar en el arbol";
        cout << "\n 4.-Recorridos de un arbol";
        cout << "\n 5.-Altura,niveles del arbol";
        cout << "\n 6.-Salir";
        cout << "\n*****************************************";
        cout << "\n\nDigite una opcion: ";
        cin >> opcion;
        system("cls");
        if (opcion == 1) {
            cout << "Ingrese un dato: ";
            cin >> dato;
            objArbol.insertarNodo(arbol, dato);
            /*llammos al objeto para usar el metodo*/
            cout << endl;
            system("pause");
            system("cls");
        }
        else if (opcion == 2) {
            cout << "A R B O L" << endl;
            objArbol.mostrar(arbol, contador);
            /*llammos al objeto para usar el metodo*/
            cout << endl;
            system("pause");
            system("cls");
        }
        else if (opcion == 3) {
            cout << "Digite un elemento a buscar: ";
            cin >> dato;
            if (objArbol.buscar(arbol, dato) == true) {
                cout << "Elemento " << dato << " encontrado dentro del arbol" << endl;
            }
            else {
                cout << "Elemento no pertenese al arbol";
            }
            cout << endl;
            system("pause");
            system("cls");
        }
        else if (opcion == 4) {
            subMenu();
            cout << endl;
            system("pause");
            system("cls");
        }
        else if (opcion == 5) {

            cout << "La altura del es: " << objArbol.alturaArbolbin(arbol) << endl;
            cout << "La nivel del ARBOL es de " << objArbol.cantidadNiveles(arbol) << endl;
            //cout<<"La anchura del es "<<objArbol.nodoN(arbol, 3)<<endl;
            cout << endl;
            system("pause");
            system("cls");
        }
    }
}

int main() {
    menu(); /* llamando a la funcion menu */
    cout << endl;
    return 0;
}