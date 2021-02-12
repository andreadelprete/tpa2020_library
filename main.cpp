#include <iostream>
#include <string>
#include <vector>

#include "library/book.h"
#include "library/author.h"
#include "library/warehouse.h"

using namespace std;
using namespace library;

void printBookList(const vector<Book*> &bl)
{
    for(auto b: bl){
        cout<<"Title: "<<b->getTitle()<<endl<<"Authors: ";
        for(auto a: b->getAuthors()){
            cout<<a->getName()<<" "<<a->getSurname()<<"; ";
        }
        cout<<"Publication year: "<<b->getPublicationYear()<<endl;
        cout<<endl;
    }
}

int main()
{
    std::cout << "Hello, Library!" << std::endl;
    Warehouse wh("libreria-giovanni");

    Author* ynh = new Author(
            "Yuval",
            "Harari",
            Date{24, FEB, 1976},
            "Israelian");
    ynh->setGenre("Historian");
    wh.addAuthor(ynh);

    Person* v_bompiani = new Person(
            "Valentino",
            "Bompiani",
            Date{12, AUG, 1902},
            "Italian");

    Publisher* bompiani = new Publisher(
            "Bompiani",
            "Roma",
            v_bompiani);
    wh.addPublisher(bompiani);

    Book* sapiens = new Book(
            "Sapiens: a brief history of human kind",
            bompiani,
            2014);
    sapiens->addAuthor(ynh);
    sapiens->setAvailableCopies(5);
    wh.addBook(sapiens);

    Book* homodeus = new Book(
            "Homo Deus: Breve storia del futuro",
            bompiani,
            2015);
    homodeus->addAuthor(ynh);
    homodeus->setAvailableCopies(5);
    wh.addBook(homodeus);

    Book* twentyone = new Book(
            "21 lezioni per il XXI secolo",
            bompiani,
            2018);
    twentyone->addAuthor(ynh);
    twentyone->setAvailableCopies(5);
    wh.addBook(twentyone);

    cout<<"Search books containing the work 'human' in the title."<<endl;
    vector<Book*> res1 = wh.searchBookByTitle("human");
    printBookList(res1);

    cout<<"Search books by Harari."<<endl;
    vector<Book*> res2 = wh.searchBookByAuthorSurname("Harari");
    printBookList(res2);

    unsigned int startYear=2015, endYear=2017;
    cout<<"Search books published between "<<startYear<<" and "<<endYear<<endl;
    vector<Book*> res3 = wh.searchBookByYearRange(startYear, endYear);
    printBookList(res3);

    return 0;
}
