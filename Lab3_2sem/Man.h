#pragma once
#include <algorithm>
#include <string>
#include <sstream>
#include <io.h>
#include <fcntl.h>

using namespace std;

class Man
{
private :
	wstring name;
	wstring surname;
	wstring fatherName;
public :
	void SetData();
	void ShowData();
	wstring GetSurname();
	~Man() {};
};
