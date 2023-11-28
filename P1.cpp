//include headers and libraries
#include <string>
#include <iostream>
#include "Library.h"

using namespace std;

int main(){
    Library library;
    string command;
    string bookName;
    
    cout << "Welcome to the Library!" << endl;
    cout << "Please enter a command: " << endl;
    cout << "add, remove, print, quit" << endl;
    cin >> command;

    while(command != "quit"){
        if(command == "add"){
            cout << "Please enter a book name: " << endl;
            cin >> bookName;
            if(library.addBook(bookName)){
                cout << "Book added successfully!" << endl;
            }else{
                cout << "Book already exists!" << endl;
            }
        }else if(command == "remove"){
            cout << "Please enter a book name: " << endl;
            cin >> bookName;
            if(library.removeBook(bookName)){
                cout << "Book removed successfully!" << endl;
            }else{
                cout << "Book does not exist!" << endl;
            }
        }else if(command == "print"){
            library.print();
        }else{
            cout << "Invalid command!" << endl;
        }
        cout << "Please enter a command: " << endl;
        cout << "add, remove, print, quit" << endl;
        cin >> command;
    }

    //ask for commands and execute
    
    return 0;
}
