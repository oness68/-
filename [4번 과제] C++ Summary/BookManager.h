#pragma once
#include<vector>
#include"Book.h"
#include<iostream>
#include<algorithm>
using namespace std;

class BookManager
{
	vector<Book> books;

public:
	void addBook(string _title, string _author);
	void searchByTitle(string _title);
	void searchByAuthor(string _author);
	void displayAllBooks(vector<Book> _books);
	vector<Book> getBooks();
};

