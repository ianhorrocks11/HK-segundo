#include <string>

#ifndef SEGUNDOPARCIAL_HORROCKSKOBELT_EMAIL_H
#define SEGUNDOPARCIAL_HORROCKSKOBELT_EMAIL_H

using namespace std;

class email{
public:
    unsigned long id;
    string from;
    string to;
    string date;
    string subject;
    string content;

    email(unsigned long id, const string &from, const string &to, const string &date, const string &subject,
          const string &content) : id(id), from(from), to(to), date(date), subject(subject), content(content) {}

    email() {}

};




#endif //SEGUNDOPARCIAL_HORROCKSKOBELT_EMAIL_H
