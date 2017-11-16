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

    bool esVacia();

    int getTamanio();

    void insertar(email m);

    void remover(unsigned int id);

    void reemplazar(int pos, email m);

    void vaciar();

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

bool Lista::esVacia() {
    return inicio == NULL;
}


/**
 * Metodo para obtener la cantidad de nodos de la lista
 * @tparam T
 * @return la cantidad de nodos de la lista
 */

int Lista::getTamanio() {
    nodo *aux = inicio;
    int count=0;
    while(aux!=NULL){
        count++;
        aux = aux->getNext();
    }
    return count;
}


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
        nodo *nn = new nodo(m, inicio);
        inicio = nn;
        return;
    }else {

        while (aux != NULL) {

            aux = aux->getNext();

            while (sig != NULL) {

                if (m.date > sig->getMail().date) {

                    nodo *nn = new nodo(m, aux->getNext());
                    aux->setNext(nn);
                }

                sig = sig->getNext();
            }

            aux = aux->getNext();
        }
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

    while (count < pos-1 && aux->getNext() != NULL){
        count++;
        aux=aux -> getNext();
    }
    if (aux->getNext() == NULL )
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
    unsigned i=0;
    nodo *aux = inicio;

    while (i < pos && aux != NULL){
        aux = aux->getNext();
        i++;
    }
    if(aux == NULL)
        throw 3;

    aux->setMail(m);
}


/**
 * Función que vacia la lista enlazada
 * @tparam T
 */

void Lista::vaciar() {}


int Lista::getpos(unsigned int id) {
    nodo *aux = inicio;
    int pos = 0;
    while (aux != NULL){
        pos ++;
        if (id == aux->getMail().id)
            return pos;
        aux = aux->getNext();
    }

    if (NULL == aux)
        throw 404;
}

void Lista::mostrarlista() {
    nodo*aux = inicio;

    while (aux != NULL){
        cout <<"---------------------------" <<endl;
        cout << aux->getMail().id << endl;
        cout << aux->getMail().from << endl;
        cout << aux->getMail().to << endl;
        cout << aux->getMail().date << endl;
        cout << aux->getMail().subject << endl;
        cout << aux->getMail().content << endl;
        cout <<"-------------------------"<<endl;
        aux = aux->getNext();
    }
}



#endif //LISTA_H