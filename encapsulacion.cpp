#include<iostream>
#include<string>

using namespace std;


class Persona {
    //no se puede acceder a las variables privadas desde fuera del codigo
    private:
        string nombre;
        int edad;
    public:
    //Los constructores no retornan ningun valor y tienen el mismo nombre que la clase
    Persona(string n, int e): nombre(n), edad(e) {}

    //Destructor, utilizaz el caracter '~'
    ~Persona() {
        cout << "destructor" << endl;
    }

    //los metodos se declaran como funciones
    void saludar () {
        cout << "Nombre: " << nombre <<"- Edad: " << edad << endl;
    }
};


int main(){
    //para trabajar con apuntadores, la variable tiene que llevar '*' y se utiliza la palabra reservada
    //'new' y con esto se crea una persona distinta
    //con punteros la memoria se reserva durante la ejecucion del programa
    Persona *p = new Persona("Nala", 24);
    Persona *p2 = new Persona("Erick", 29);


    p -> saludar();
    p2 -> saludar();
  
};