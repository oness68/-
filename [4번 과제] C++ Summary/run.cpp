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
		
		cout << "1.책 추가\t2.책 대여\t3.전체 책 출력\t4.책 검색\t5.작가 검색\t0.종료\n숫자 입력>>>";

		cin >> input;
		switch (input)
		{
		case 0: // 종료
			flag = true;
			break;
		case 1: //책 추가
			
			cout << "제목 입력 : ";
			cin >> title;
			cout << "작가 입력 : ";
			cin >> author;
			BM.addBook(title, author);

			BRM.initializeStock(title, 3);
			break;

		case 2: //책 대여
			cout << "제목 입력 : ";
			cin >> title;
			BRM.borrowBook(title);
			break;

		case 3: // 전체 책 출력
			BM.displayAllBooks(BM.getBooks());
			break;
		case 4: //책 검색
			cout << "검색 할 책 이름을 입력하세요 >>";
			cin >> title;
			BM.searchByTitle(title);
			break;
		case 5: // 작가 검색
			cout << "검색 할 작가 이름을 입력하세요 >>";
			cin >> author;
			BM.searchByAuthor(author);
			break;

		
		default:
			cout << "입력 값이 잘 못 되었습니다.\n";
			break;
		}
	}

}