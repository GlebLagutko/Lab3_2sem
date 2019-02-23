#include <algorithm>
#include <string>
#include <sstream>
#include <io.h>
#include <fcntl.h>
#include "Man.h"
#include <iostream>

using namespace std;

void Man::ShowData()
{
	wcout <<  L" " << name[0] << L". " << fatherName[0] << L". " << surname << endl;
}

void Man::SetData()
{
	wcin >> surname;
	surname[0] = toupper(surname[0]);
	wcin >> name;
	name[0] = toupper(name[0]);
	wcin >> fatherName;
	fatherName[0] = toupper(fatherName[0]);
}

wstring Man::GetSurname()
{
	return surname;
}