#ifndef LISTA_H
#define LISTA_H


#include "nodo.h"
#include <string>

using namespace std;

/**
 * Clase que implementa una Lista Enlasada generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */

class Lista {
private:
    nodo *inicio;

public:
    Lista();

    Lista(const Lista &li);

    ~Lista();

    // bool esVacia();

    // int getTamanio();

    void insertar(email m);

    void insertarFrom(email m);

    void remover(unsigned int id);

    void reemplazar(int pos, email m);

    // void vaciar();

    nodo *getInicio(){return inicio;}

    int getpos(unsigned int id);

    void mostrarlista();
};


/**
 * Constructor de la clase Lista
 * @tparam T
 */

Lista::Lista() {
    inicio = NULL;
}


/**
 * Constructor por copia de la clase Lista
 * @tparam T
 * @param li
 */

Lista::Lista(const Lista &li) {}


/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */

Lista::~Lista() {
    nodo *aux = inicio;
    nodo *ant = inicio;

    while (aux != NULL) {
        ant = aux;
        aux = aux->getNext();
        delete ant;

    }
}


/**
 * Metodo para saber si la lista esta vacia
 * @tparam T
 * @return true si la lista esta vacia, sino false
 */

// bool Lista::esVacia() {
//    return inicio == NULL;
//}


/**
 * Metodo para obtener la cantidad de nodos de la lista
 * @tparam T
 * @return la cantidad de nodos de la lista
 */

// int Lista::getTamanio() {
//    nodo *aux = inicio;
//    int count=0;
//    while(aux!=NULL){
//        count++;
//        aux = aux->getNext();
//    }
//    return count;
//}


/**
 * Inserta un nodo con el dato en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el dato
 * @param dato  dato a insertar
 */

void Lista::insertar(email m) {
    nodo *aux = inicio;
    nodo *sig = inicio;

    if (m.id==1){
        nodo *nn = new nodo( inicio, m);
        inicio = nn;
        return;
    }else {

        while (aux != nullptr) {

            aux = aux->getNext();

            while (sig != nullptr) {

                if (m.date > sig->getMa().date) {

                    nodo *nn = new nodo(aux->getNext(), m);
                    aux->setNext(nn);
                }

                sig = sig->getNext();
            }

            aux = aux->getNext();
        }
    }

}


void Lista::insertarFrom(email m) {
    nodo *aux = inicio;
    nodo *sig = inicio;

        while (aux != nullptr) {

            aux = aux->getNext();

            while (sig != nullptr) {

                if (m.from > sig->getMa().from) {

                    nodo *nn = new nodo(aux->getNext(), m);
                    aux->setNext(nn);
                }

                sig = sig->getNext();
            }

            aux = aux->getNext();
        }
    }




/**
 * Elimina el nodo en la posicion 'pos' de la lista enlasada
 * @tparam T
 * @param pos posicion del nodo a eliminar
 */


void Lista::remover(unsigned int id) {
    nodo *aux = inicio;
    int count=0;

    int pos = getpos(id);

    if (pos == 0){
        if (inicio==NULL)
            throw 1;

        inicio = inicio->getNext();
        delete aux;
        return;
    }

    while (count < pos-1 && aux->getNext() != nullptr){
        count++;
        aux=aux -> getNext();
    }
    if (aux->getNext() == nullptr )
        throw 1;

    nodo *tmp = aux->getNext();
    aux->setNext(aux->getNext()->getNext());
    delete tmp;
}

/**
 * Reemplaza el dato almacenado en un nodo por este otro
 * @tparam T
 * @param pos posicion donde se desea reemplazar
 * @param dato nuevo dato a almacenar
 */

void Lista::reemplazar(int pos, email m) {
    unsigned int i=0;
    nodo *aux = inicio;

    while (i < pos && aux != nullptr){
        aux = aux->getNext();
        i++;
    }
    if(aux == nullptr)
        throw 3;

    aux->setNext(aux->getNext());
}


/**
 * Función que vacia la lista enlazada
 * @tparam T
 */

// void Lista::vaciar() {}


int Lista::getpos(unsigned int id) {
    nodo *aux = inicio;
    int pos = 0;
    while (aux != nullptr){
        pos ++;
        if (id == aux->getMa().id)
            return pos;
        aux = aux->getNext();
    }

    if (aux == nullptr)
        throw 404;
}

void Lista::mostrarlista() {
    nodo *aux = inicio;

    while (aux != NULL){
        cout <<"---------------------------" <<endl;
        cout << aux->getMa().id << endl;
        cout << aux->getMa().from << endl;
        cout << aux->getMa().to << endl;
        cout << aux->getMa().date << endl;
        cout << aux->getMa().subject << endl;
        cout << aux->getMa().content << endl;
        cout <<"-------------------------"<<endl;
        aux = aux->getNext();
    }
}



#endif //LISTA_H