//
// Created by ADP on 2/11/21.
//

#ifndef LIBRARY_PUBLISHER_H
#define LIBRARY_PUBLISHER_H

#include <string>
#include "person.h"

namespace library {

    class Publisher
    {
        std::string name_;
        std::string location_;
        Person *founder_;
    public:
        Publisher(const std::string name, const std::string &location, Person *founder) :
                name_(name), location_(location), founder_(founder) {}

        const std::string &getName() const;
        const std::string &getLocation() const;
        const Person *getFounder() const;

        void setName(const std::string &name);
        void setLocation(const std::string &location);
        void setFounder(Person* founder);

    };

}
#endif //LIBRARY_PUBLISHER_H
