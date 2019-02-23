#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <io.h>
#include <map>
#include <fcntl.h>
#include "Man.h"

using namespace std;

const int Count = 3;

void ShowMap(multimap<wstring, Man>& People)
{
	int i = 0;
	for (auto it = People.begin(); it != People.end(); ++it)
	{
		wcout << ++i << endl;
		it->second.ShowData();
	}
}

multimap<wstring, Man> MakeList(int count)
{
	multimap<wstring, Man> People;
	for (int i = 0; i < count; i++)
	{
		Man m;
		m.SetData();
		People.insert(pair<wstring, Man>(m.GetSurname(), m));
	}
	return People;
}

void FindStudent(multimap<wstring, Man>& People)
{
	wstring surname;
	wcout << "Enter surname : ";
	wcin >> surname;
	auto iterator = People.find(surname);
	if(iterator != People.end())
	for (iterator; iterator != People.upper_bound(surname); ++iterator)
		iterator->second.ShowData();
	else 
	wcout << L"Not found " << endl;
}

int main()
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stderr), _O_U16TEXT);
	multimap<wstring, Man> People = MakeList(Count);
	ShowMap(People);
	FindStudent(People);
	system("pause");
}