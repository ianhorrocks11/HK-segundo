#ifndef INC_02_LISTAS_NODO_H
#define INC_02_LISTAS_NODO_H

#include <iostream>
#include <string>
#include "email.h"


using namespace std;


class nodo{
private:
    nodo *next;
    email ma;
public:
    nodo(nodo *next, const email &ma) : next(next), ma(ma) {}


    const email &getMa() const {
        return ma;
    }

    void setMa(const email &ma) {
        nodo::ma = ma;
    }

    nodo *getNext() const {
        return next;
    }

    void setNext(nodo *next) {
        nodo::next = next;
    }

};




#endif //INC_02_LISTAS_NODO_H
