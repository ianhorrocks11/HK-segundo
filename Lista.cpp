//
// Created by Nicolas Kobelt on 16/11/17.
//
#include "Lista.h"

/**
 * Constructor de la clase Lista
 * @tparam T
 */

Lista::Lista() {
    inicio = NULL;
    lifrom = NULL;
    id = 1;
}




/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */

Lista::~Lista() {
    vaciar();
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
 * Inserta un nodo con el dato en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el dato
 * @param dato  dato a insertar
 */

void Lista::insertar(email m) {
    insertarDate(m, id);
    id ++;

}

void Lista::insertarDate(email m, unsigned long int id) {
    nodo *aux = inicio;


    if (inicio == NULL) {
        nodo *nn = new nodo(inicio, m, id);
        inicio = nn;
        return;
    }

    if (m.date > aux->getMa().date) {
        nodo *n = new nodo(aux, m, id);
        inicio = n;

    } else {

        while (aux->getNext() != NULL && m.date < aux->getNext()->getMa().date) {

            aux = aux->getNext();
        }

        if (aux == NULL)
            throw 1;

        nodo *nn = new nodo(aux->getNext(), m, id);
        aux->setNext(nn);


    }
}

void Lista::insertarFrom(email m, unsigned long int idF) {

        nodo *auxF = inicio;

        if (inicio == NULL) {
            nodo *nn = new nodo(inicio, m, idF);
            inicio = nn;
            return;
        }

        if (m.from > auxF->getMa().from) {
            nodo *nf = new nodo(auxF, m, idF);
            inicio = nf;

        } else {

            while (auxF->getNext() != NULL && m.from < auxF->getNext()->getMa().from) {

                auxF = auxF->getNext();
            }

            if (auxF == NULL)
                throw 1;

            nodo *nn = new nodo(auxF->getNext(), m, idF);
            auxF->setNext(nn);


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
 * Función que vacia la lista enlazada
 * @tparam T
 */

void Lista::vaciar() {
    nodo *borr;
    nodo * aux = inicio;

    while (aux != NULL){
        borr = aux;
        aux = aux->getNext();
        delete borr;
    }

    aux = lifrom;

    while (aux != NULL){
        borr = aux;
        aux = aux->getNext();
        delete borr;
    }

    inicio = NULL;
    lifrom = NULL;
}


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

//void Lista::mostrarlista() {
//    nodo *aux = inicio;
//
//    while (aux != NULL){
//        cout <<"---------------------------" <<endl;
//        cout << aux->getMa().id << endl;
//        cout << aux->getMa().from << endl;
//        cout << aux->getMa().to << endl;
//        cout << aux->getMa().date << endl;
//        cout << aux->getMa().subject << endl;
//        cout << aux->getMa().content << endl;
//        cout <<"-------------------------"<<endl;
//        aux = aux->getNext();
//    }
//}

