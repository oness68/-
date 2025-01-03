#include "BorrowManager.h"

void BorrowManager::initializeStock(string _title, int _quantity)
{
	stock.insert({ _title,_quantity });

}

void BorrowManager::borrowBook(string _title)
{
	auto temp = stock.find(_title);
	if (temp != stock.end())
	{
		if (stock[_title] > 0)
		{
			stock[_title]--;

			
			cout<<"대여 완료!\n";
		}
		else
		{
			cout<<"재고가 없습니다.\n";
		}

	}
	else
	{
		cout << "입력한 책의 이름과 일치하는 책이 없습니다.\n";
	}
	

	
}

void BorrowManager::returnBook(string _title)
{
	auto temp = stock.find(_title);
	if (temp != stock.end())
	{
		if (stock[_title] <3)
		{
			stock[_title]++;
			cout << "반납 완료!\n";

		}
		else
		{
			cout << "빌려간 기록이 없는 책입니다.\n";
		}

	}
	else
	{
		cout << "입력한 책의 이름과 일치하는 책이 없습니다.\n";
	}
}

void BorrowManager::displayStock()
{
	for (auto i : stock)
	{
		cout << "제목 : " << i.first << " 재고 :" << i.second << endl;
	}
}


