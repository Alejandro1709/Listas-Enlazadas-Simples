#include <iostream>
#include "Lista.hpp"
#include "Cliente.hpp"

Lista<Cliente *> *list_client = new Lista<Cliente *>();

using namespace std;

void ingresarCliente(int i)
{
  string cod, nom, ape;
  float pre;

  cout << "\n";
  cout << "========REGISTRAR DATOS DE ALUMNO==========" << endl;
  cout << "Ingresar Codigo: ";
  cin >> cod;
  cout << "Ingresar Nombres: ";
  cin >> nom;
  cout << "Ingresar Apellidos: ";
  cin >> ape;
  cout << "Ingresar Precio: ";
  cin >> pre;
  Cliente *cliente = new Cliente(cod, nom, ape, pre);
  list_client->agregaPos(cliente, i);
}

int menu()
{
  cout << "\n";
  cout << "-------------------------------------" << endl;
  cout << "======================MENU===========" << endl;
  cout << "<1> Ingresar datos de Cliente." << endl;
  cout << "<5> Salir." << endl;
  cout << "-------------------------------------" << endl;
  cout << "Ingrese una opcion: ";
  int opcion;
  do
  {
    cin >> opcion;
    if (opcion < 0 || opcion > 5)
      cout << "Ingrese una opcion valida... ";
  } while (opcion < 0 || opcion > 5);

  return opcion;
}

int main()
{
  int nro_clientes = 0;
  while (true)
  {
    int opcion = menu();
    if (opcion == 5)
    {
      cout << "Programa Terminado..." << endl;
      break;
    }
    switch (opcion)
    {
    case 1:
      ingresarCliente(nro_clientes);
      nro_clientes++;
      break;
    case 5:
      break;
    }
  }

  return 0;
};