#include "NodoListaSimple.h"

NodoListaSimple::NodoListaSimple()
{
}
NodoListaSimple::NodoListaSimple(int id_, std::string nombre)
{
  id = id_;
}
int NodoListaSimple::getId()
{
  return id;
}
void NodoListaSimple::setId(int i_)
{
  id = i_;
}

std::string NodoListaSimple::getNombre()
{
  return nombre;
}
void NodoListaSimple::setNombre(std::string nombre_)
{
  nombre = nombre_;
}


NodoListaSimple* NodoListaSimple::getSiguiente()
{
  return siguiente;
}
void NodoListaSimple::setSiguiente(NodoListaSimple* siguiente_)
{
  siguiente = siguiente_;
}
