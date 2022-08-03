#include <iostream>

using namespace std;

struct Nodo
{
    char dato;
    Nodo* siguiente;
};

void insertarElemento(Nodo*&, Nodo*&, char);
bool colaVacia(Nodo*);
void vaciarCola(Nodo*&, Nodo*&, char&);
void menu();

char dato;
Nodo* frente = NULL;
Nodo* fin = NULL;

int main()
{
    menu();
    return 0;
}

void insertarElemento(Nodo* &frente, Nodo* &fin, char d)
{
    //Almacenar nodo
    Nodo* nuevo_nodo = new Nodo();

    //Asignar nodo al dato
    nuevo_nodo->dato = d;
    nuevo_nodo->siguiente = NULL;

    //Asignar los punteros frente y fin
    //Caso cola vacía 
    if (colaVacia(frente))
    {
        frente = nuevo_nodo;
        fin = nuevo_nodo;
    }
    //Caso cola tenga 1 o mas elementos
    else
    {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    cout << "\tElemento: " << d << " Ingresado correctamente" << endl;
}

bool colaVacia(Nodo *frente)
{
    if (frente == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void vaciarCola(Nodo* &frente, Nodo* &fin, char &d)
{
    d = frente->dato;
    Nodo* aux = frente;

    if (frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }
    else
    {
        frente = frente->siguiente;
    }
    delete aux;
}

void menu()
{
    int opc;
    do
    {
        cout << "\t*** MENU *** \n";
        cout << "1. Insertar un caracter a la cola\n";
        cout << "2. Eliminar un caracter de la cola\n";
        cout << "3. Salir\n";
        cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "\nDigite un caracter: ";
            cin >> dato;
            insertarElemento(frente, fin, dato);
            cout << "\n";
            system("pause");
            break;
        case 2:
            cout << "Eliminando caracteres de la cola..." << endl;

            while (frente != NULL)
            {
                vaciarCola(frente, fin, dato);
                if (frente != NULL)
                {
                    cout << dato << " --> ";
                }
                else
                {
                    cout << dato << " --> NULL";
                }
            }

            cout << "\n";
            system("pause");
            break;
        }
    } while (opc != 3);
}
