// ExtClaseNicoleCascanteEjercicio4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int opc;

    cout << "Ingrese un numero del 1 al 12 para descubrir el mes correspondiente: ";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "El mes del año corresponde a: Enero" << endl;
        break;

    case 2:
        cout << "El mes del año corresponde a: Febrero" << endl;
        break;

    case 3:
        cout << "El mes del año corresponde a: Marzo" << endl;
        break;

    case 4:
        cout << "El mes del año corresponde a: Abril" << endl;
        break;

    case 5:
        cout << "El mes del año corresponde a: Mayo" << endl;
        break;

    case 6:
        cout << "El mes del año corresponde a: Junio" << endl;
        break;

    case 7:
        cout << "El mes del año corresponde a: Julio" << endl;
        break;

    case 8:
        cout << "El mes del año corresponde a: Agosto" << endl;
        break;

    case 9:
        cout << "El mes del año corresponde a: Septiembre" << endl;
        break;

    case 10:
        cout << "El mes del año corresponde a: Octubre" << endl;
        break;

    case 11:
        cout << "El mes del año corresponde a: Noviembre" << endl;
        break;

    case 12:
        cout << "El mes del año corresponde a: Diciembte" << endl;
        break;
    }
    system("pause");
    return 0;
}

