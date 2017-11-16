#include <vector>
#include <string>
#include "Lista.h"

#ifndef SEGUNDOPARCIAL_HORROCKSKOBELT_MAILMANAGER_H
#define SEGUNDOPARCIAL_HORROCKSKOBELT_MAILMANAGER_H



class MailManager {
private:
    Lista mails;
    Lista mailsFrom;
    unsigned int contador;
public:
    MailManager();

    void addMail(email m);

    void deleteMail(unsigned int id);

    vector<email> getsortedbyDate();

    vector<email> getsortedbyDate (string desde, string hasta);

    vector<email> getsortedbyFrom ();

    vector<email> getbyfrom(string from);


};


#endif //SEGUNDOPARCIAL_HORROCKSKOBELT_MAILMANAGER_H
