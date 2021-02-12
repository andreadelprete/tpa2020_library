//
// Created by ADP on 2/11/21.
//

#ifndef LIBRARY_AUTHOR_H
#define LIBRARY_AUTHOR_H

//#include <library/person.h>
#include <string>
#include "person.h"

namespace library
{

    class Author : public Person
    {
        std::string genre_;

    public:
        Author(const std::string &name, const std::string &surname, const library::Date &birthday,
               const std::string &nationality): Person(name, surname, birthday, nationality)
        {}

        const std::string& getGenre() const;
        void setGenre(const std::string &genre);

    };

}
#endif //LIBRARY_AUTHOR_H
