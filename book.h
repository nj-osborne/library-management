#ifndef BOOK_H
#define BOOK_H

/**
 * Includes
 */
#include <iostream>
#include <string>
/**
 * Usings
 */
using std::string;

/**
 * Book class defining each of the attributes for a book.
 */
class Book
{
    public:
    string title;
    string author;
    int year;
    Book* next;
    Book* prev;

    Book(string t,string a,int y);
};

#endif