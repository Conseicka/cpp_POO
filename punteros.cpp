#include <iostream>

using namespace std;

int main()
{
    char letra = 'A';
    //variable tipo puntero que almacenara el puntero de la variable 'letra'
    char *puntero = &letra;
    cout << "Puntero de la variable 'letra': " << ( int * ) &letra << endl;

    //convercion de un caracter puntero a entero
    cout << "Contenido de la variable  puntero: " << ( int * ) puntero << endl;
    cout << "Contenido de la memoria a la que se apunta: " << *puntero;
}