#include<iostream>
#include<string>

using namespace std;

int main() 
{
    union numero_letra{
        int numero;
        char letra;
    };

    numero_letra x = {'A'};

    cout << "x como numero: " << x.numero << endl;
    cout << "x como letra: " << x.letra << endl;
    //Para pasar los datos de numero a char yd e char a numero
    cout << "x como char desde numero: " << ( char ) x.numero << endl;
    cout << "x como numero desde letra: " << ( int ) x.letra << endl;

    //Usando enums

    enum dias_semana { lunes = 'l', martes = 'm', miercoles = 'x' };
    dias_semana dia = martes;

    cout << "dia de la semana: " << ( char ) dia;
}
