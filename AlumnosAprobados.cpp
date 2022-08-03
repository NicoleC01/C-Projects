// ExtClaseNicoleCascanteEjercicio2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include <string>

using namespace std;

int main()
{
    //En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de : ▪ Alumnos que aprobaron todos los exámenes. ▪ Alumnos que aprobaron al menos un examen. ▪ Alumnos que aprobaron únicamente el último examen.

    //1. Crear la matriz
    string alumnos[5][4];

    cout << "Datos de los alumnos: " << endl;

    //2. Llenar la matriz
    //Recorrer las filas
    for (int i = 0; i < 5; i++)
    {
        cout << "Alumno #" << i+ 1;
        cout << "Ingrese el nombre del Alumno: " << endl;
        getline(cin, alumnos[i][0]);
        
        //Recorrer columnas
        for (int j = 0; j < 4; j++)
        {
            cout << "Examen #" << i + 1;
            cout << "Ingrese la calificación en el exámen: " << endl;
            getline(cin, alumnos[i][j]);
        }

        system("cls");
    }

    cout << "Mostrar datos del Alumno: " << endl;

    //Recorrer la matriz
    //Recorrer filas
    for (int i = 0; i < 5; i++)
    {
        cout << "Nombre del Alumno: " << alumnos[i][0] << endl;

        for (int j = 0; j < 4; j++)
        {               
            cout << "Calificación en el exámen: "<< [i][j]<< endl;
        }
    }

    system("pause");

    return 0;
}

