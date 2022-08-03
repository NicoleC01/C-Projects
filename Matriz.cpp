#include <iostream>
#include <string>

using namespace std;

void solicitarLibros();
void mostrarDatos();
void limpiarMemoria();

string** matriz;
int numFil, numColum = 2;

int main()
{
    solicitarLibros();
    mostrarDatos();
    limpiarMemoria();

    system("pause");
    return 0;
} 

void solicitarLibros()  
{
    cout << "Cuantos libros desea registrar? " << endl;
    cin >> numFil;

    matriz = new string * [numFil];

    for (int i = 0; i < numFil; i++)
    {
        matriz[i] = new string[numColum];      
    }

    for (int i = 0; i < numFil; i++)
    {
        while (getchar() != '\n');
        cout << "\nLibro " << i + 1 << ":\n";
        for (int j = 0; j < numColum; j++)
        {
            if (j == 0)
            {
                cout << "Titulo: " << endl;
                getline(cin, *(*(matriz + i) + j));
            }
            else
            {
                cout << "Autor: " << endl;
                getline(cin, *(*(matriz + i) + j));
            }
        }
        system("cls");
    }

}

void mostrarDatos()
{
    cout << "Detalles de los libros " << endl;
    for (int i = 0; i < numFil; i++)
    {
        cout << "\nLibro " << i + 1 << ":\n";
        for (int j = 0; j < numColum; j++)
        {
            if (j == 0)
            {
                cout << "Titulo: " << *(*(matriz + i) + j) << endl;
               
            }
            else
            {
                cout << "Autor: " << *(*(matriz + i) + j) << endl;
                
            }
        }
    }
}


void limpiarMemoria()
{
    for (int i = 0; i < numFil; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;
}
