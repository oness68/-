#pragma once
#include<map>
#include<string>
#include"Book.h"
#include<iostream>
#include<vector>
using namespace std;
class BorrowManager
{
	map<string, int> stock;
public:
	void initializeStock( string _title, int _quantity = 3);
	void borrowBook(string _title);
	void returnBook(string _title);
	void displayStock();
	
};

