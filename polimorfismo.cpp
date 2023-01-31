//Polimorfismo: Es la caracteristica que permite a objetos de diferentes clases intercambiar mensajes
//con una misma estructura

// herencia es la capacidad de una clase de heredar caracteristicas a una o mas clases
#include <iostream>
#include <string>

using namespace std;

//clase padre
class Animal
{
//Se declaran las variables como protected las cuales eran privadas, esto para poder heredarlas y acceder a sus elementos
protected:
    static int numero_animales;
    string alimento = "carne";

public:
    Animal();
    ~Animal();
    static int obtenerNumeroAnimales();
    string obtenerAlimento()
    {
        return alimento;
    }
    void comer(Animal *a)
    {
        cout << "Este animal esta comiendo " << a -> alimento << " ñumñum" << endl;
    }
};

int Animal::numero_animales = 0;

Animal::Animal()
{
    cout << "Creando nuevo animal…" << endl;
    numero_animales += 1;
}

Animal::~Animal()
{
    cout << "Borrando animal…" << endl;
    numero_animales -= 1;
}

int Animal::obtenerNumeroAnimales()
{
    return numero_animales;
}

//clase hija
//Como esta clase hereda de 'Animal', se tiene que agregar la referencia con la siguiente sintaxis
//( : public Animal ), se tiene que agregar la palabra public para que se puedan utilizar desde fuera
class Herviboro : public Animal
{
public:
    //Constructor, este constructor va usar el constructor de la clase Animal
    Herviboro() : Animal()
    {
        this->alimento = "pasto";
    }
    // metodo de la subclase
    void pastar()
    {
        cout << "Este animal esta pastando.." << endl;
    }
};

class Carnivoro : public Animal
{
public:
    Carnivoro() : Animal()
    {
        this->alimento = "carne";
    }
    void cazar()
    {
        cout << "Este animal esta cazando" << endl;
    }
};
//En la definicionde la clase tanto como en su constructor, tienen que definirse las clases que va a heredar
class Omnivoro : public Herviboro, public Carnivoro {
public:
    Omnivoro() : Herviboro(), Carnivoro() {}
    void comer(){
        cout << "Este animal comoe lo quesea" << endl;
    }



};
int main()
{

    Animal *a = new Animal();
    Herviboro *h = new Herviboro();
    Carnivoro *c = new Carnivoro();
    Omnivoro *o = new Omnivoro();

    cout << "Numero de Animales: " << Animal::obtenerNumeroAnimales() << endl;

    //a -> comer();
    
    c -> cazar();
    a -> comer(c);
    a -> comer(h);
    cout << "humano:" << endl;
    //con la siguiente sintaxis tiene ambiguedad, por eso se tiene que especificar la clase de metodo que va a usar
    o -> Carnivoro::comer(c); 
    //con esta sintaxis se reescriben los metodos de las clases que hereda y se elimina la ambiguedad
    o -> comer();

    delete a;

    cout << "Numero de Animales: " << Animal::obtenerNumeroAnimales() << endl;
}