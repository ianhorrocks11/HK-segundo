
#include "MailManager.h"
/*
 * Constructor general
 */

MailManager::MailManager() {
}

/*
 * Agregar un mail a la lista
 */

void MailManager::addMail(email m) {
    mails.insertar(m);

}

/*
 * Borrar un mail de la lista
 */

void MailManager::deleteMail(unsigned int id) {

    mails.remover(id);
}

/*
 * Obtener mails ordenados por fecha
 */

vector<email> MailManager::getsortedbyDate() {
    vector<email> ret;
    nodo *aux = mails.getInicioD();

    while(aux != NULL) {
        ret.push_back(aux->getMa());
        aux = aux->getNext();
    }
   return ret;
}

/*
 * Buscar mails entre fechas
 */

vector<email> MailManager::getsortedbyDate(string desde, string hasta) {
    vector<email> ret;
    nodo *aux = mails.getInicioD();

    while(aux != NULL) {

        if (aux->getMa().date >= desde && aux->getMa().date <= hasta)
            ret.push_back(aux->getMa());

        aux->getNext();
    }
    return ret;
}

/*
 * Mostrar la lista ordenada por "from"
 */

vector<email> MailManager::getsortedbyFrom() {
    vector<email> ret;
    nodo *aux = mails.getInicioF();

    while(aux != NULL) {

            ret.push_back(aux->getMa());

        aux->getNext();
    }
    return ret;
}

/*
 * Buscar mail(s) de un remitente
 */
vector<email> MailManager::getbyfrom(string remitente) {
    vector<email> ret;
    nodo *aux = mails.getInicioF();

    while(aux != NULL) {

        if (aux->getMa().from == remitente)
            ret.push_back(aux->getMa());

        aux->getNext();
    }
    return ret;
}