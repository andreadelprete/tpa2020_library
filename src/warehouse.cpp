//
// Created by ADP on 2/11/21.
//

#include "library/warehouse.h"

using namespace library;
using namespace std;

void Warehouse::addAuthor(Author *a) {
    authors_.push_back(a);
}

void Warehouse::addPublisher(Publisher *p) {
    publishers_.push_back(p);
}

void Warehouse::addBook(Book *b) {
    books_.push_back(b);
}

vector<Book *> Warehouse::searchBookByTitle(const string &title) {
    vector<Book*> res;
    for(auto b: books_){
        if(b->getTitle().find(title) != string::npos)
            res.push_back(b);
    }
    return res;
}

vector<Book *> Warehouse::searchBookByAuthorSurname(const string &surname) {
    vector<Book*> res;
    for(auto b: books_){
        vector<Author*> authors = b->getAuthors();
        for(auto a: authors_) {
            if (a->getSurname() == surname)
                res.push_back(b);
        }
    }
    return res;
}

vector<Book *> Warehouse::searchBookByYearRange(unsigned int yearStart, unsigned int yearEnd) {
    vector<Book*> res;
    for(auto b: books_){
        if (b->getPublicationYear()>=yearStart && b->getPublicationYear()<=yearEnd)
            res.push_back(b);
    }
    return res;
}
