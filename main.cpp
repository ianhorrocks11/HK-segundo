#include <iostream>
#include "MailManager.h"

using namespace std;

int main() {
    email m1 (1,"juan@","carlos@","2017-10-1","hola", "hola todo bien?");
    email m2 (2,"john@","pepe@","2017-12-13","cuota", "paga la cuota");

    MailManager M;

    M.addMail(m1);
    M.addMail(m2);

    M.getsortedbyDate();
}