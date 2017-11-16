#ifndef INC_02_LISTAS_NODO_H
#define INC_02_LISTAS_NODO_H

#include <iostream>
#include <string>
#include "email.h"

using namespace std;


class nodo{
private:
    email mail;
    nodo *next;
public:
    nodo(const email &mail, nodo *next) : mail(mail), next(next) {}

    const email &getMail() const {
        return mail;
    }

    void setMail(const email &mail) {
        nodo::mail = mail;
    }

    nodo *getNext() const {
        return next;
    }

    void setNext(nodo *next) {
        nodo::next = next;
    }

};



#endif //INC_02_LISTAS_NODO_H
