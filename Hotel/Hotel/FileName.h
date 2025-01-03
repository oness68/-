#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> book_time) {
    int answer = 0;

	vector<vector<int>> convert_second(book_time.size(), vector<int>(2));

	string separator = ":";

	int waitingTime = 60 * 10;
	
	for (size_t i = 0; i < book_time.size(); i++)
	{
		int index = book_time[i][0].find(separator);
		string hourString = book_time[i][0].substr(0, index);
		string minString = book_time[i][0].substr(index + 1, book_time[i][0].length());

		int hourToSecond = stoi(hourString) * 60 * 60;
		int minToSecond = stoi(minString) * 60;

		convert_second[i][0] = hourToSecond + minToSecond;

		index = book_time[i][1].find(separator);
		hourString = book_time[i][1].substr(0, index);
		minString = book_time[i][1].substr(index + 1, book_time[i][0].length());

		hourToSecond = stoi(hourString) * 60 * 60;
		minToSecond = stoi(minString) * 60;

		convert_second[i][1] = hourToSecond + minToSecond + waitingTime;
	}

	vector<int> rooms(0);

	for (size_t i = 0; i < convert_second.size(); i++)
	{
		if (rooms.size() > 0)
		{
			bool Trigger = false;

			for (size_t a = 0; a < rooms.size(); a++)
			{
				if (!((convert_second[rooms[a]][0] > convert_second[i][0] && convert_second[rooms[a]][0] < convert_second[i][1]) ||
					(convert_second[rooms[a]][1] > convert_second[i][0] && convert_second[rooms[a]][1] < convert_second[i][1])))
				{
					if ((convert_second[rooms[a]][0] == convert_second[i][0] && convert_second[rooms[a]][1] == convert_second[i][1]))
					{
					}
					else
					{
						rooms[a] = i;
						Trigger = true;
						break;
					}
				}
			}

			if (!Trigger)
			{
				rooms.push_back(i);
			}
		}
		else
		{
			rooms.push_back(i);
		}
	}

    return rooms.size();
}
