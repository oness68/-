#pragma once
#include<string>
using namespace std;
class Book
{
	string title;
	string author;
	bool isborrow = true;
public:
	Book(string _title, string _author) { this->title = _title; this->author = _author; }
	string getTitle() { return this->title; };
	string getAuthor() { return this->author; };
	bool getIsborrow() { return this->isborrow; }
	void setIsborrow(bool flag) { this->isborrow = flag; }
	
	string getBook();
};

