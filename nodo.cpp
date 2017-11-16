//
// Created by Nicolas Kobelt on 16/11/17.
//

#include "nodo.h"

nodo::nodo() {
    next = NULL;
}

nodo *nodo::getNext() const {
    return next;
}

void nodo::setNext(nodo *next) {
    nodo::next = next;
}

const email &nodo::getMa() const {
    return ma;
}

void nodo::setMa(const email &ma) {
    nodo::ma = ma;
}

nodo::nodo(nodo *ne, email mai, unsigned long int id){
    next = ne;
    ma = mai;
    ma.id = id;
}

