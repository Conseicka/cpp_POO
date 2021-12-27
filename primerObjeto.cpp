#include<iostream>
#include<string>

using namespace std;


class Persona {
    public:
        string nombre = "Nala";
        int edad = 24;
};


int main(){
    Persona p = Persona();

    cout << p.nombre << endl;

}