#ifndef LIBRARY_h
#define LIBRARY_h


#include "library.h"



/***************************************************************
 * 
 */
Library::Library()
{
    head == nullptr;
}

/***************************************************************
 * Method to add a book to the end of the library.
 * 
 * @param title the title of the book.
 * @param author the author of the book.
 * @param year the year the book was made.
 */
void Library::addBook(string title,string author,int year)
{
    Book* newBook = new Book(title,author,year);
    Book* temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newBook;
    newBook->prev = temp;
}
   

/***************************************************************
 * Method will delete a book by taking in a title and searching 
 * for that book then removing it from the library.
 * 
 * @param title the title of the book that will be deleted.
 * 
 */
void Library::deleteBook(string title)
{
    if(head == nullptr)
    std::cout << "Library is empty!" << std::endl;
    return;

    Book* temp = head->next;
    while(temp != nullptr && temp->title != title)
    {
        temp = temp->next;
    }
    if(temp == nullptr) 
    std::cout << "Book not found!" << std::endl;
    return;
  
    temp->prev->next = temp->next;

    if(temp->next != nullptr)
    {
    temp->next->prev = temp->prev;
    }
    delete temp;
}
/***************************************************************
 * Method displays all the books stored in the library.
 * 
 */
void Library::displayBook()
{
    if(head->next = nullptr)
    std::cout << "Your Library is empty." << std::endl;
    return;
    
    Book* temp = head->next;
    while(temp != nullptr)
    {
        std::cout << "Title: " << temp->title << " Author: " << temp->author << " Year: " << temp-> year << std::endl;
        temp = temp->next;
    }
}


#endif