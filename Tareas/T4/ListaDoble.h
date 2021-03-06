#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "NodoDoble.h"
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class ListaDoble
{
    public:
        ListaDoble();
        void insertarPrimero(char c);
        void eliminarUltimo();
        NodoDoble* buscar(std::string s);
        //
        NodoDoble* primero;
        NodoDoble* ultimo;
        NodoDoble* getPrimero();
        void setPrimero(NodoDoble* nuevo_);
        NodoDoble* getUltimo();
        void setUltimo(NodoDoble* ultimo_);

    protected:

    private:
};

#endif // LISTADOBLE_H
