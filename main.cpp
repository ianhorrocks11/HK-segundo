#include <iostream>
#include "MailManager.h"

using namespace std;

int main() {
    email m1 (1,"juan@","carlos@","2017-10-1","puto", "hola todo bien?");
    email m2 (2,"juan@","carlos@","2017-12-13","puto", "hola todo bien?");

    MailManager M;

    M.addMail(m1);
    M.addMail(m2);

    M.getsortedbyDate();
}