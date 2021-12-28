// herencia es la capacidad de una clase de heredar caracteristicas a una o mas clases
#include <iostream>
#include <string>

using namespace std;

class Animal
{
//Se declaran las variables como protected las cuales eran privadas, esto para poder heredarlas    
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
    void comer()
    {
        cout << "Este animal esta comiendo " << alimento << " ñumñum" << endl;
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

class Herviboro : public Animal
{
public:
    Herviboro() : Animal()
    {
        this->alimento = "pasto";
    }
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
int main()
{

    Animal *a = new Animal();
    Herviboro *h = new Herviboro();
    Carnivoro *c = new Carnivoro();

    cout << "Numero de Animales: " << Animal::obtenerNumeroAnimales() << endl;

    a->comer();
    c->cazar();

    delete a;

    cout << "Numero de Animales: " << Animal::obtenerNumeroAnimales() << endl;
}