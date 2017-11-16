#include "MailManager.h"

/*
 * Constructor general
 */

MailManager::MailManager() {
    contador = 0;
}

/*
 * Agregar un mail a la lista
 */

void MailManager::addMail(email m) {

    m.id = contador++;
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
    ret.push_back()
}

/*
 * Buscar mails entre fechas
 */

vector<email> MailManager::getsortedbyDate(string desde, string hasta) {

}