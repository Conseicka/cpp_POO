#include<iostream>
#include<string>

using namespace std;


class Persona {
    public:
        string nombre = "Nala";
        int edad = 24;
    //los metodos se declaran como funciones
    void saludar () {
        cout << nombre << endl;
    }
};


int main(){
    //para trabajar con apuntadores, la variable tiene que llevar '*' y se utiliza la palabra reservada
    //'new' y con esto se crea una persona distinta
    //con punteros la memoria se reserva durante la ejecucion del programa
    Persona *p = new Persona();
    Persona *p2 = new Persona();

    p -> nombre = "Erick";

    p -> saludar();
    p2 -> saludar();
    cout << p -> edad << endl;

}