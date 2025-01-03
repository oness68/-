#include "FileName.h"
using namespace std;

void main()
{
	vector<vector<string>> book_time;

	book_time = {{"15:00", "17:00"} ,{"16:40", "18:20" }, { "14:20", "15:20" }, { "14:10", "19:20" }, { "18:20", "21:20" }};
	cout << solution(book_time) << endl;
	book_time = {{"09:10", "10:10"} ,{"10:20", "12:20" }};
	cout << solution(book_time) << endl;
	book_time = {{"10:20", "12:30"}, {"10:20", "12:30"}, {"10:20", "12:30"}};
	cout << solution(book_time) << endl;
}