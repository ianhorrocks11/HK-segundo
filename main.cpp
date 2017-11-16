#include <iostream>
#include "MailManager.h"


int main() {
    email m1 (1,"juan@","carlos@","2017-10-1","hola", "hola todo bien?");
    email m2 (2,"john@","pepe@","2017-12-13","cuota", "paga la cuota");

    MailManager M;

    M.addMail(m1);
    M.addMail(m2);

    cout<<"mostrar por fecha"<<endl;
    vector <email> fecha;
    fecha = M.getsortedbyDate();

    for (int i =0; i < fecha.size(); i++){
        std::cout<<fecha[i].to<<endl;
        std::cout<<fecha[i].from<<endl;
        std::cout<<fecha[i].id<<endl;
        std::cout<<fecha[i].subject<<endl;
        std::cout<<fecha[i].content<<endl;
        std::cout<<"--------------------------"<<endl;
    }
    system("PAUSE");
    return 0;
}