#include <vector>
#include <string>
#include "Lista.h"
#include "email.h"

#ifndef SEGUNDOPARCIAL_HORROCKSKOBELT_MAILMANAGER_H
#define SEGUNDOPARCIAL_HORROCKSKOBELT_MAILMANAGER_H



class MailManager {
private:
    Lista mails;
    unsigned int contador;
public:
    MailManager();

    void addMail(email m);

    void deleteMail(unsigned int id);

    vector<email> getsortedbyDate();

    vector<email> getsortedbyDate (string desde, string hasta);


};


#endif //SEGUNDOPARCIAL_HORROCKSKOBELT_MAILMANAGER_H
