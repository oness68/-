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

			
			cout<<"�뿩 �Ϸ�!\n";
		}
		else
		{
			cout<<"��� �����ϴ�.\n";
		}

	}
	else
	{
		cout << "�Է��� å�� �̸��� ��ġ�ϴ� å�� �����ϴ�.\n";
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
			cout << "�ݳ� �Ϸ�!\n";

		}
		else
		{
			cout << "������ ����� ���� å�Դϴ�.\n";
		}

	}
	else
	{
		cout << "�Է��� å�� �̸��� ��ġ�ϴ� å�� �����ϴ�.\n";
	}
}

void BorrowManager::displayStock()
{
	for (auto i : stock)
	{
		cout << "���� : " << i.first << " ��� :" << i.second << endl;
	}
}


