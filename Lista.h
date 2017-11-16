#ifndef LISTA_H
#define LISTA_H


#include "nodo.h"




/**
 * Clase que implementa una Lista Enlasada generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */

class Lista {
private:
    nodo *inicio;
    nodo *lifrom;
    unsigned long int id;

public:
    Lista();

    ~Lista();

    bool esVacia();

    void insertar(email m);

    void insertarDate(email m, unsigned long int id);

    void insertarFrom(email m, unsigned long int id);

    void remover(unsigned int id);

    void vaciar();

    nodo *getInicioD(){return inicio;}

    nodo *getInicioF(){ return lifrom;}

    int getpos(unsigned int id);

//    void mostrarlista();
};





#endif //LISTA_H