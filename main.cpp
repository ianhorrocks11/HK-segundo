#include <iostream>
#include "Lista.h"

using namespace std;

int main() {
    email m1 (1,"juan@","carlos@","2017-10-1","hola", "hola todo bien?");
    email m2 (2,"john@","pepe@","2017-12-13","cuota", "paga la cuota");

    Lista mails;
    Lista mailsxfrom;

    mails.insertar(m1);
    mails.insertar(m2);

    mailsxfrom.insertarFrom(m1);
    mailsxfrom.insertarFrom(m2);

    mails.mostrarlista();

    mailsxfrom.mostrarlista();
}