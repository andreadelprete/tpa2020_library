//
// Created by ADP on 2/11/21.
//

#include "library/person.h"

using namespace std;
using namespace library;

const std::string &library::Person::getName() const {
    return name_;
}

const std::string &library::Person::getSurname() const {
    return surname_;
}

const library::Date &library::Person::getBirthday() const {
    return birthday_;
}

const std::string &library::Person::getNationality() const {
    return nationality_;
}

void library::Person::setName(const std::string &name) {
    name_ = name;
}

void library::Person::setSurname(const std::string &surname) {
    surname_ = surname;
}

void library::Person::setBirthday(const library::Date &birthday) {
    birthday_ = birthday;
}

void library::Person::setNationality(const std::string &nationality) {
    nationality_ = nationality;
}
