#include <iostream>
#include "library.h"

struct Book {
	char title[100];
	char author[100];
	char isbn[20];
	int avaliable;
}book;

	const int max_books = 100;
	book library[max_books];
	int bookCount = 0;

	void AddBook(){
	  if(bookCount >= max_books){
	std::cout << "The Library Is Full!" << std::endl;
  }
	book NewBook;
	std::cout << "Enter Book Title! ";
	std::cin.ignore();
	std::cin.getline(NewBook.title,100);
	std::cout << "Enter The Author Of Book! ";
	std::cin.getline(NewBook.author,100);
	std::cout << "Enter The ISBN Of Book! ";
	std::cin.getline(NewBook.isbn,20);
	NewBook.avaliable = 1;

	library[bookCount ++] = NewBook;
	std::cout << "The Book Succesfully is Done!" << std::endl;

}
