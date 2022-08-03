// ExtClaseNicoleCascanteEjercicio1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "string"

using namespace std;

int main()
{
   //Hacer un programa en C++ que ayude a una empresa a incrementar los salarios de los trabajadores según el rendimiento obtenido.Y finalmente debe de imprimir el nuevo salario del empleado

    //Declarar variables
    int opc, salario, aumento;
    cout << "Digite el monto del salario: ";
    cin >> salario;

    system("cls");

    //Imprimir la salida
    cout << "* Seleccione el rendimiento del contrato: *" << endl;
    cout << "1. DESTACADO: Incrementa un 60% el salario" << endl;
    cout << "2. EXCELENCIA: Incrementa un 30% el salario" << endl;
    cout << "3. CUMPLIDOR: Incrementa un 10% el salario" << endl;
    cout << "4. NO CUMPLE: No recibe aumento" << endl;
    cout << "5. Salir" << endl;
    cout << "\n" "Opcion: ";

    //Capturar Valores
    cin >> opc;

    //Logica
    switch (opc)
    {
    case 1:
        aumento = salario + (salario * 0.6);
        cout << "\n" "Como empleado DESTACADO, su nuevo salario corresponde a: " << aumento << endl;
        break;

    case 2:
        aumento = salario + (salario * 0.3);
        cout << "\n" "Como empleado de EXCELENCIA, su nuevo salario corresponde a: " << aumento << endl;
        break;

    case 3:
        aumento = salario + (salario * 0.1);
        cout << "\n" "Como empleado CUMPLIDOR, su nuevo salario corresponde a: " << aumento << endl;
        break;

    case 4:
        cout << "\n" "Como empleado NO CUMPLE, su salario corresponde a: " << salario << endl;
        break;

    case 5:
        break;
    }
    system("pause");

    return 0;
}

