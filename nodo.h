#ifndef INC_02_LISTAS_NODO_H
#define INC_02_LISTAS_NODO_H

#include "email.h"


using namespace std;


class nodo {
private:
    nodo *next;
    email ma;


public:
    nodo();

    nodo(nodo *ne, email mai, unsigned long int id);

    nodo *getNext() const;

    void setNext(nodo *next);

    const email &getMa() const;

    void setMa(const email &ma);
};





#endif //INC_02_LISTAS_NODO_H
