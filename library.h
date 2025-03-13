#ifndef LIBRARY_H
#define LIBRARY_H
/**
 * Inlcudes
 */
#include <iostream>
#include "book.h"

/**
 * Usings
 */
using std::string;

/**
 * Library class that sets up linked list functionality along
 * with adding methods to use.
 * 
 */
class Library
{
    private:
    Book* head;


    public:
    Library();
    void addBook(string title,string author,int year);
    void displayBook();
    void deleteBook(string title);
};

#endif