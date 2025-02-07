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

