#pragma once
#include <string>

using namespace std;
using namespace System;

string osstr_to_str (String ^ str)
{
	string tmp = "";
	for (int i = 0; i < str->Length; i++)
		tmp += (char)str[i];
	return tmp;
}

String^ str_to_osstr (string str)
{
	return gcnew String(str.c_str());
}