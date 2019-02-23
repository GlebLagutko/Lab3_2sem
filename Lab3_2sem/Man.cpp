#include <algorithm>
#include <string>
#include <sstream>
#include <io.h>
#include <fcntl.h>
#include "Man.h"
#include <iostream>

using namespace std;

void TransformString(wstring& wstring)
{
	transform(wstring.begin()++, wstring.end(), wstring.begin()++, tolower);
	wstring[0] = toupper(wstring[0]);
}

void Man::ShowData()
{
	wcout <<  L" " << name[0] << L". " << fatherName[0] << L". " << surname << endl;
}

void Man::SetData()
{
	wcin >> surname;
	TransformString(surname);
	wcin >> name;
	TransformString(name);
	wcin >> fatherName;
	TransformString(fatherName);

}

wstring Man::GetSurname()
{
	return surname;
}