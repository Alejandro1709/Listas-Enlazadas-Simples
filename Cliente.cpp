#include "Cliente.hpp"

Cliente::Cliente()
{
  this->codigo = "";
  this->nombre = "";
  this->apellido = "";
  // this->producto = nullptr
  this->precio = 0;
}

Cliente::Cliente(string codigo, string nombre, string apellido, float precio)
{
  this->codigo = codigo;
  this->nombre = nombre;
  this->apellido = apellido;
  // this->producto = producto
  this->precio = precio;
}

string Cliente::getCodigo() { return this->codigo; }
string Cliente::getNombre() { return this->nombre; }
string Cliente::getApellido() { return this->apellido; }
// Producto Cliente::getProducto() { return this->producto; }
float Cliente::getPrecio() { return this->precio; }

void Cliente::setCodigo(string codigo) { this->codigo = codigo; }
void Cliente::setNombre(string nombre) { this->nombre = nombre; }
void Cliente::setApellido(string apellido) { this->apellido = apellido; }
void Cliente::setPrecio(float precio) { this->precio = precio; }
// void setProducto(Producto prod);
void Cliente::mostrarCliente()
{
  cout << "\n";
  cout << "Codigo: " << this->codigo << endl;
  cout << "Nombre: " << this->nombre << endl;
  cout << "Apellido: " << this->apellido << endl;
  // cout << "Producto" << this->producto << endl;
  cout << "Precio: " << this->precio << endl;
}

Cliente::~Cliente() {}