#include <iostream>
#include <string>
#include "library.h"
#include "book.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{
    Library myLibrary;
    int choice;
    do
    {
        cout << "Welcome to the Library!" << endl << "What would you like to do? \n" << endl;
        cout << "1. Add a book to my library. " << endl;
        cout << "2. Delete a book from my library. " << endl;
        cout << "3. View my library. " << endl;
        cout << "4. Exit the program. " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

       


        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        cin.ignore();

        if(choice == 1)
        {
            string title, author;
            int year;

            
            cout << "What is the title of the book you would like to add? " << endl;
            getline(cin, title);

            cout << "What is the authors name? " << endl;
            getline(cin, author);

            cout << "What is the year the book was published? " << endl;
            cin >> year;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Please enter a number." << endl;
                continue;
            }
            

            myLibrary.addBook(title,author,year); 
            cout << "Book added!" << endl;   
        }
        else if (choice == 2)
        {
            string title;
            
            cout << "What is the title of the book you would like to delete? " << endl;
            
            getline(cin, title);

            myLibrary.deleteBook(title);
            
        }
        else if (choice == 3)
        {
            
            myLibrary.displayBook();
        }
        else if (choice == 4)
        {
            cout << "Exiting the program, goodbye! " << endl;
            break;
        }
        else
        {
            cout << "Incorrect input, please choose between prompted choices. " << endl;
        }
    }
    
    while(true);

    return 0;
}
    
    
