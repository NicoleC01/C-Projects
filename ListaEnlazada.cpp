#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo* siguiente;
};

void menu();
void insertarElemento(Nodo*&, int);
void mostrarlista(Nodo*);
void buscarlista(Nodo*, int);
void eliminarElemento(Nodo*&, int);

int num;
Nodo* lista = NULL;
Nodo* aux1 = lista;
Nodo* aux2;


int main()
{
    menu();
    return 0;
}

void menu()
{
    int opc;
    do
    {
        cout << "\t*** MENU *** \n";
        cout << "1. Insertar elementos a la lista\n";
        cout << "2. Mostrar los elementos a la lista\n";
        cout << "3. Buscar un elemento en la lista\n";
        cout << "4. Eliminar un elemento en la lista\n";
        cout << "5. Salir\n";
        cin >> opc;

        switch (opc)
        {
        case 1:
           
            cout << "\nIngrese un elemento a la lista: ";
            cin >> num;     
            insertarElemento(lista, num);
            cout << "\n";
            system("pause");
            break;

        case 2:
            mostrarlista(lista);
            cout << "\n";
            system("pause");
            break;

        case 3:
            cout << "\nIngrese el elemento a buscar: ";
            cin >> num;
            buscarlista(lista, num);
            cout << "\n";
            system("pause");
            break;

        case 4:
            cout << "\nIngrese el elemento que desea eliminar: ";
            cin >> num;
            eliminarElemento(lista, num);
            cout << "\n";
            system("pause");
            break;
        }
        system("cls");
    } while (opc != 5);
}

void insertarElemento(Nodo *&lista, int n)
{
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    
    while ((aux1 != NULL) && (aux1->dato < n))
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1)
    {
        lista = nuevo_nodo;
    }
    else
    {
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;

    cout << "\tElemento: " << n << " Insertado correctamente" << endl;
}

void mostrarlista(Nodo *lista)
{
    Nodo *actual = new Nodo();
    actual = lista;

    while (actual != NULL)
    {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
}

void buscarlista(Nodo *lista, int n)
{
    bool band = false;


    Nodo *actual = new Nodo();
    actual = lista;

    while ((actual != NULL) && (actual->dato <= n))
    {
        if (actual->dato == n)
        {
            band = true;
        }
        actual = actual->siguiente;
    }

    if (band ==true)
    {
        cout << "\tElemento: " << n << " SI ha sido encontrado en la lista " << endl;
    }
    else
    {
        cout << "\tElemento: " << n << " NO ha sido encontrado en la lista " << endl;
    }
}

void eliminarElemento(Nodo *&lista, int n)
{
    if (lista != NULL)
    {
        Nodo *aux_borrar;
        Nodo* anterior = NULL;

        aux_borrar = lista;

        while ((aux_borrar != NULL) && (aux_borrar->dato != n))
        {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        if (aux_borrar == NULL)
        {
            cout << "Elemento no ha sido encontrado" << endl;
        }
        else if (anterior == NULL)
        {
            lista = lista->siguiente;
            delete aux_borrar;
        }
        else
        {
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
    }
}

