#include "Book.h"



string Book::getBook()
{
	string result;


	result = "제목 : " + this->title + "		작가 : " + this->author;


	return result;
}
