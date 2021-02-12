//
// Created by ADP on 2/11/21.
//

#ifndef LIBRARY_PERSON_H
#define LIBRARY_PERSON_H

#include <string>

namespace library
{

enum Month {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

struct Date{
    unsigned int day;
    Month month;
    unsigned int year;
};

class Person
{
protected:
    std::string name_;
    std::string surname_;
    Date birthday_;
    std::string nationality_;

public:
    Person(const std::string &name, const std::string &surname, const Date &birthday,
            const std::string &nationality): name_(name), surname_(surname), birthday_(birthday),
            nationality_(nationality)
    {}

    const std::string& getName() const;
    const std::string& getSurname() const;
    const Date& getBirthday() const;
    const std::string& getNationality() const;

    void setName(const std::string &name);
    void setSurname(const std::string &surname);
    void setBirthday(const Date &birthday);
    void setNationality(const std::string &nationality);
};

}
#endif //LIBRARY_PERSON_H
