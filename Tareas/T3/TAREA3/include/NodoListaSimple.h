#ifndef NODOLISTASIMPLE_H
#define NODOLISTASIMPLE_H
#include<stdlib.h>
#include <iostream>

//ESTE NODO/LISTA SIMPLE SERVIRÁN PARA CAPAS E IMÁGENES
class NodoListaSimple
{
    public:
        NodoListaSimple();
        NodoListaSimple(int id_, std::string nombre);
        NodoListaSimple* siguiente;
        NodoListaSimple* getSiguiente();
        void setSiguiente(NodoListaSimple* siguiente_);
        int id;
        std::string nombre;
        int getId();
        void setId(int id_);
        std::string getNombre();
        void setNombre(std::string nombre);

    protected:

    private:
};

#endif // NODOLISTASIMPLE_H
