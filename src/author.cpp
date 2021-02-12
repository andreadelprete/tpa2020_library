//
// Created by ADP on 2/11/21.
//

#include "library/author.h"

const std::string &library::Author::getGenre() const {
    return genre_;
}

void library::Author::setGenre(const std::string &genre) {
    genre_ = genre;
}
