//
// Created by ADP on 2/11/21.
//

#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

#include <string>
#include <vector>
#include "author.h"
#include "publisher.h"

namespace library
{
    class Book
    {
        std::string title_;
        std::vector<Author*> authors_;
        Publisher* publisher_;
        unsigned int publicationYear_;
        unsigned int availableCopies_;

    public:
        Book(const std::string &title, Publisher* publisher, unsigned int publicationYear):
        title_(title), publisher_(publisher), publicationYear_(publicationYear), availableCopies_(0)
        {}

        const std::string& getTitle() const;
        const std::vector<Author*>& getAuthors() const;
        const Publisher* getPublisher() const;
        unsigned int getPublicationYear() const;
        int getAvailableCopies() const;

        void addAuthor(Author* author);
        void setAvailableCopies(unsigned int n);
    };

}

#endif //LIBRARY_BOOK_H
