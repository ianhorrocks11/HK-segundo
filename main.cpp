#include <iostream>
#include "MailManager.h"


int main() {
    email m1(1, "juan@", "carlos@", "2018-10-2", "hola", "hola todo bien?");
    email m2(2, "john@", "pepe@", "2017-12-13", "cuota", "paga la cuota");
    email m3(0, "pap", "rodrigo", "2016-12-1", "hey", "pajareteee");
    email m4(0, "pap", "rodrigo", "2017-12-1", "hey", "pajareteee");
    email m5(0, "pap", "rodrigo", "2017-12-21", "hey", "pajareteee");

    MailManager M;

    M.addMail(m1);
    M.addMail(m2);
    M.addMail(m3);
    M.addMail(m4);
    M.addMail(m5);

    cout << "mostrar por fecha" << endl;
    vector<email> fecha;
    fecha = M.getsortedbyDate();

    for (int i = 0; i < fecha.size(); i++) {
        std::cout << fecha[i].date << endl;
        std::cout << fecha[i].to << endl;
        std::cout << fecha[i].from << endl;
        std::cout << fecha[i].id << endl;
        std::cout << fecha[i].subject << endl;
        std::cout << fecha[i].content << endl;
        std::cout << "--------------------------" << endl;
    }
}