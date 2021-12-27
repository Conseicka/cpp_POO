#include<iostream>
#include<string>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
};

//Con variables
/*  
int main()
{
    Persona p = Persona();
    p.nombre = "Diana";
    p.edad = 29;

    cout << p.nombre << endl;
    cout << p.edad << endl;
}
*/

//Con punteros

int main()
{
    Persona *p = new Persona();
    p->nombre = "Diana";
    p->edad = 26;
    cout << p->nombre << endl;
    cout << p->edad;
}