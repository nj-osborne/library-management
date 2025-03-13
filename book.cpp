#include "book.h"

/**
 * Inputs needed from user and initializes.
 */
Book::Book(string t,string a,int y)
{
     title = t;
     author = a;
     year = y;
     next = nullptr;
     prev = nullptr;
}