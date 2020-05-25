#include "ListaDoble.h"

ListaDoble::ListaDoble()
{
    primero = NULL;
    ultimo = NULL;
}

//Get y Set de primero y último
NodoDoble* ListaDoble::getPrimero()
{
  return primero;
}
NodoDoble* ListaDoble::getUltimo()
{
  return ultimo;
}
void ListaDoble::setPrimero(NodoDoble* primero_)
{
  primero = primero_;
}
void ListaDoble::setUltimo(NodoDoble* ultimo_)
{
  ultimo = ultimo_;
}

//Métodos
void ListaDoble::insertarPrimero(char c)
{
  NodoDoble* nuevo = new NodoDoble(c);
  nuevo->setSiguiente(NULL);

  if(ListaDoble::getPrimero()==NULL){
    setPrimero(nuevo);
    setUltimo(nuevo);
  }else{
    NodoDoble* current = getPrimero();
    nuevo->setSiguiente(current);
    current->setAnterior(nuevo);
    nuevo->setAnterior(NULL);
    setPrimero(nuevo);
  }
}
void ListaDoble::eliminarUltimo()
{
  if(getPrimero()!= NULL){
    if(getPrimero()== getUltimo()){
      delete primero;
      setPrimero(NULL);
    }else{
      NodoDoble *auxiliar = getPrimero();
      while(auxiliar->getSiguiente()!=getUltimo()){
        auxiliar = auxiliar->getSiguiente();
      }
      axiliar->setSiguiente(NULL);
      getUltimo->getAnterior(NULL);
      delete ultimo;
      setUltimo(auxiliar);
    }
  }
}

NodoDoble* ListaDoble::buscar(std::string s){
  if(getPrimero !=NULL){
      NodoDoble *auxiliar = getPrimero();
      while(auxiliar->getSiguiente() != NULL){
        if(s == axuliar.getPalabra()){
          return auxiliar;
        }else{
          auxiliar = auxiliar->getSiguiente();
        }
      }
  }
  return NULL;
}
