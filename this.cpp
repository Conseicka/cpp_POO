#include<iostream>
#include<string>

using namespace std;


class Persona {
    //no se puede acceder a las variables privadas desde fuera del codigo
    private:

        string nombre;
        int edad;
    public:
       //las variables estaticas no se pueden modificar dinamicamente (con apuntadores)
        //para esto se tienen que definir los metodos fuera de la clase pero declarandolas dentro de la misma
        static int numero_personas;
    //Los constructores no retornan ningun valor y tienen el mismo nombre que la clase
    Persona(string nombre, int edad);
        //la palabra reservada 'this', sirve para diferenciar entre la las variables de la clase
        //y del constructor cuando estas tienen el mismo nombre
        //this -> nombre = nombre;
        //this -> edad = edad;
    

    //Destructor, utilizaz el caracter '~'
    ~Persona() {
        cout << "destructor" << endl;
    }
    //Se utiliza amperson para regresar el apuntador de la memoria
    Persona &establecerNombre(string nombre){
        this -> nombre = nombre;
        return *this;
    }
    Persona &establecerEdad(int edad){
        this -> edad = edad;
        return *this;
    }
    //los metodos se declaran como funciones
    void saludar ();
};

//con esta sintaxis se define a que clase pertenece el atributo
int Persona::numero_personas = 0;
//el metodo 'saludar' se define fuera de la clase
void Persona::saludar(){cout << "Nombre: " << nombre <<"- Edad: " << edad << endl;}

Persona::Persona(string nombre, int edad){
        //la palabra reservada 'this', sirve para diferenciar entre la las variables de la clase
        //y del constructor cuando estas tienen el mismo nombre
        this -> nombre = nombre;
        this -> edad = edad;
        numero_personas += 1;
    }

int main(){
    //para trabajar con apuntadores, la variable tiene que llevar '*' y se utiliza la palabra reservada
    //'new' y con esto se crea una persona distinta
    //con punteros la memoria se reserva durante la ejecucion del programa
    
    Persona *p = new Persona("Nala", 30);
    Persona *p2 = new Persona("Erick", 29);

    p -> establecerNombre("Ale").establecerEdad(24).establecerNombre("Nala");

    p -> saludar();

    p2 -> saludar();
    
    cout << "Numero de personas: " << Persona::numero_personas << endl;
};