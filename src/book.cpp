//
// Created by ADP on 2/11/21.
//

#include "library/book.h"

using namespace std;
using namespace library;

const std::string &library::Book::getTitle() const {
    return title_;
}

const std::vector<Author *> &library::Book::getAuthors() const {
    return authors_;
}

const Publisher *library::Book::getPublisher() const {
    return publisher_;
}

unsigned int Book::getPublicationYear() const{
    return publicationYear_;
}

int library::Book::getAvailableCopies() const {
    return availableCopies_;
}

void library::Book::addAuthor(Author *author) {
    authors_.push_back(author);
}

void library::Book::setAvailableCopies(unsigned int n) {
    availableCopies_ = n;
}
