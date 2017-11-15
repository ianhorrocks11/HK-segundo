#ifndef INC_02_LISTAS_NODO_H
#define INC_02_LISTAS_NODO_H

#include <iostream>
#include <string>

using namespace std;

template <class T>
class nodo{
private:
    unsigned int id;
    string from;
    string to;
    string date;
    string subject;
    string content;
    T dato;
    nodo *next;
public:
    nodo (unsigned int ID, string de, string para, string fecha, string asunto, string contenido, T d, nodo* n){
        dato = d;
        next = n;
        id = ID;
        from = de;
        to = para;
        date = fecha;
        subject = asunto;
        content = contenido;
    }

    nodo(){
        next=NULL;
        id = NULL;
        from = NULL;
        to = NULL;
        date = NULL;
        subject = NULL;
        content = NULL
    }

    void setNext(nodo *next) {
        nodo::next = next;
    }
    void setDato(T dato) {
        nodo::dato = dato;
    }
    T getDato() const {
        return dato;
    }
    nodo *getNext() const {
        return next;
    }

    const string &getFrom() const {
        return from;
    }

    void setFrom(const string &from) {
        nodo::from = from;
    }

    const string &getTo() const {
        return to;
    }

    void setTo(const string &to) {
        nodo::to = to;
    }

    const string &getDate() const {
        return date;
    }

    void setDate(const string &date) {
        nodo::date = date;
    }

    const string &getSubject() const {
        return subject;
    }

    void setSubject(const string &subject) {
        nodo::subject = subject;
    }

    const string &getContent() const {
        return content;
    }

    void setContent(const string &content) {
        nodo::content = content;
    }
};



#endif //INC_02_LISTAS_NODO_H
