#include<iostream>
#include<string>

using namespace std;


class Persona {
    public:
        string nombre = "Nala";
        int edad = 24;

    //Los constructores no retornan ningun valor y tienen el mismo nombre que la clase
    Persona(string n) {
        nombre = n;
    }

    //Destructor, utilizaz el caracter '~'
    ~Persona() {
        cout << "destructor" << endl;
    }

    //los metodos se declaran como funciones
    void saludar () {
        cout << nombre << endl;
    }
};


int main(){
    //para trabajar con apuntadores, la variable tiene que llevar '*' y se utiliza la palabra reservada
    //'new' y con esto se crea una persona distinta
    //con punteros la memoria se reserva durante la ejecucion del programa
    Persona *p = new Persona("Nala");
    Persona *p2 = new Persona("Erick");

    delete p2;

    p -> saludar();
    p2 -> saludar();
  
  

}