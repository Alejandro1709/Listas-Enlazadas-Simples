#pragma once

#include <iostream>

using namespace std;

class Cliente
{
private:
  string codigo;
  string nombre;
  string apellido;
  // Producto producto
  float precio;

public:
  Cliente();
  Cliente(string codigo, string nombre, string apellido, float precio);
  string getCodigo();
  string getNombre();
  string getApellido();
  // Producto getProducto();
  float getPrecio();
  void setCodigo(string codigo);
  void setNombre(string nombre);
  void setApellido(string apellido);
  void setPrecio(float precio);
  // void setProducto(Producto prod);
  void mostrarCliente();
  ~Cliente();
};