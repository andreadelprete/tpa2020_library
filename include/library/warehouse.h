//
// Created by ADP on 2/11/21.
//

#ifndef LIBRARY_WAREHOUSE_H
#define LIBRARY_WAREHOUSE_H

#include "library/book.h"
#include "library/author.h"
#include "library/publisher.h"

namespace library {

    class Warehouse {
        std::string name_;
        std::vector<Book*> books_;
        std::vector<Author*> authors_;
        std::vector<Publisher*> publishers_;

    public:
        Warehouse(const std::string &name): name_(name) {}

        void addAuthor(Author* a);
        void addPublisher(Publisher* p);
        void addBook(Book* b);

        std::vector<Book*> searchBookByTitle(const std::string &title);
        std::vector<Book*> searchBookByAuthorSurname(const std::string &surname);
        std::vector<Book*> searchBookByYearRange(unsigned int yearStart, unsigned int yearEnd);

    };

}
#endif //LIBRARY_WAREHOUSE_H
