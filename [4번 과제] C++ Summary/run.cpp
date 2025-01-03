#include"BookManager.h"
#include"BorrowManager.h"

int main()
{
	bool flag = false;
	BookManager BM;
	BorrowManager BRM;

	while (!flag)
	{
		int input;
		string title;
		string author;
		
		cout << "1.å �߰�\t2.å �뿩\t3.��ü å ���\t4.å �˻�\t5.�۰� �˻�\t0.����\n���� �Է�>>>";

		cin >> input;
		switch (input)
		{
		case 0: // ����
			flag = true;
			break;
		case 1: //å �߰�
			
			cout << "���� �Է� : ";
			cin >> title;
			cout << "�۰� �Է� : ";
			cin >> author;
			BM.addBook(title, author);

			BRM.initializeStock(title, 3);
			break;

		case 2: //å �뿩
			cout << "���� �Է� : ";
			cin >> title;
			BRM.borrowBook(title);
			break;

		case 3: // ��ü å ���
			BM.displayAllBooks(BM.getBooks());
			break;
		case 4: //å �˻�
			cout << "�˻� �� å �̸��� �Է��ϼ��� >>";
			cin >> title;
			BM.searchByTitle(title);
			break;
		case 5: // �۰� �˻�
			cout << "�˻� �� �۰� �̸��� �Է��ϼ��� >>";
			cin >> author;
			BM.searchByAuthor(author);
			break;

		
		default:
			cout << "�Է� ���� �� �� �Ǿ����ϴ�.\n";
			break;
		}
	}

}