#include "BookManager.h"

void BookManager::addBook(string _title, string _author)
{

	Book newBook(_title, _author);
	for (int i = 0; i < books.size(); i++)
	{
		if (books[i].getTitle().compare(_title) == 0)
		{
			cout << "중복되는 책이 있습니다.\n";
			return;
		}

	}
	books.push_back(newBook);
	
		
	
	
}

void BookManager::searchByTitle(string _title)
{
	vector<Book> result;

	for (int i = 0; i < books.size(); i++)
	{
		if (books[i].getTitle().compare(_title)==0)
			result.push_back(books[i]);

	}
	if (result.size() == 0)
		cout << "일치하는 책 제목이 없습니다.\n";
	else
		displayAllBooks(result);


}

void BookManager::searchByAuthor(string _author)
{
	vector<Book> result;

	for (int i = 0; i < books.size(); i++)
	{
		if (books[i].getAuthor().compare(_author)==0)
			result.push_back(books[i]);

	}
	if (result.size() == 0)
		cout << "일치하는 작가의 책이 없습니다.\n";
	else
		displayAllBooks(result);



}

void BookManager::displayAllBooks(vector<Book> _books)
{
	string str;
	for (int i = 0; i < _books.size(); i++)
	{
		/*if (_books[i].getIsborrow())
		{
			str = "대여 가능";
		}
		else
		{
			str = "대여 불가";
		}*/
		cout << _books[i].getBook() << endl;
	}
}

vector<Book> BookManager::getBooks()
{
	return books;
}

