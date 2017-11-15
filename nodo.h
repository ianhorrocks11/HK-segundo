#ifndef INC_02_LISTAS_NODO_H
#define INC_02_LISTAS_NODO_H

#include <iostream>
#include <string>

using namespace std;

template <class T>
class nodo{
private:
    string from;
public:


private:
    string to;
    string date;
    string subject;
    string content;
    T dato;
    nodo *next;
public:
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
    nodo(){
        next=NULL;
    }
    nodo (T d, nodo* n){
        dato = d;
        next = n;
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
