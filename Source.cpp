#include <string>
#include "Header.h"
using namespace std;

void Elections::Set_candidates()
{
	for (auto& i : arr)
	{
		cin >> i.name;
		cin >> i.vote;
		sum += i.vote;
	}
}
void Elections::Get_candidates()
{
	for (auto j : arr)
	{
		cout << j.name << " " << j.vote << " " << j.vote * 100 / sum << endl;;
	}
}
void Elections::Get_Winner()
{
	int m = 0;
	int point;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].vote > m)
		{
			m = arr[i].vote;
			point = i;
		}
	}
	cout << "Winner: " << arr[point].name << " " << arr[point].vote * 100 / sum;
}