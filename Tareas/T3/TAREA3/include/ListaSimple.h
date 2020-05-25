#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include "NodoListaSimple.h"
#include<stdlib.h>
#include <iostream>


class ListaSimple
{
    public:
        ListaSimple();
        void insertarAlInicio(int id__, std::string nombre);
        void mostrar(NodoListaSimple *primero);
        void mostrar2(NodoListaSimple *ultimo);
        void eliminar(int id_);
        NodoListaSimple *buscar(int id_);
        //
        NodoListaSimple *primero;
        NodoListaSimple *ultimo;
        NodoListaSimple *getPrimero();
        void setPrimero(NodoListaSimple *nuevo_);
        NodoListaSimple *getUltimo();
        void setUltimo(NodoListaSimple* ultimo_);


    protected:

    private:
};

#endif // LISTASIMPLE_H
