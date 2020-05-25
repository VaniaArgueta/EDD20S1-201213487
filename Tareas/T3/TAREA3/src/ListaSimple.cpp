#include "ListaSimple.h"

ListaSimple::ListaSimple()
{
    primero = NULL;
    ultimo = NULL;
}
//Get y Set de primero y último
NodoListaSimple* ListaSimple::getPrimero()
{
  return primero;
}
NodoListaSimple* ListaSimple::getUltimo()
{
  return ultimo;
}
void ListaSimple::setPrimero(NodoListaSimple* primero_)
{
  primero = primero_;
}
void ListaSimple::setUltimo(NodoListaSimple* ultimo_)
{
  ultimo = ultimo_;
}

//Métodos
void ListaSimple::insertarAlInicio(int id__, std::string nombre__)
{
  NodoListaSimple* nuevo = new NodoListaSimple(id__, nombre__);
  nuevo->setSiguiente(NULL);

  if(ListaSimple::getPrimero()==NULL){
    setPrimero(nuevo);
    setUltimo(nuevo);
  }else{

    NodoListaSimple* current = getPrimero();
    current->setSiguiente(getPrimero());
    setPrimero(current);

  }
}

NodoListaSimple *buscar(int id_){
  NodoListaSimple *auxiliar = getPrimero();
  while (auxiliar != NULL){
    if (id_ == auxiliar->getId())
    {
      return auxiliar;
    }else{
      auxiliar = auxiliar->getSiguiente();
    } 

  }
  return NULL;
}

void eliminar(int id_){
  NodoListaSimple *nodo = buscar(id_);
  if(nodo != NULL){
    if(nodo == getPrimero()){
      setPrimero( getPrimero()->getSiguiente());
    }else {
      NodoListaSimple *auxiliar = getPrimero();
      while(auxiliar->getSiguiente()->getId()!= id_){
        auxiliar = auxiliar->getSiguiente();
      }
      NodoListaSimple *auxiliar2 = auxiliar->getSiguiente()->getSiguiente();
      auxiliar->setSiguiente(auxiliar2);
    }
  }
}
