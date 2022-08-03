// ExtClaseNicoleCascanteEjercicio3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include "string"

using namespace std;

int main()
{
    int num; 

    do {
    cout << "Ingrese un numeros estandar y presione 0 para finalizar el programa: ";
    cin >> num;

    if (num > 0)
    {
    if (num % 2 == 0)
        cout << "\n" "El numero es par";
        else
        cout << "\n" "El numero es impar";
    }
    } while (((num < 20) || (num > 30)) && (num != 0));


    return 0;
}

