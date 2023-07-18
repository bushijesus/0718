#include "stdafx.h"
#include "String.h"
#include <iostream>
using namespace std;

String::String()
{
	this->str = "";
}

String::String(string s)
{
	this->str = s;
}
void String::output()
{
	cout << this->str << endl;
}
string String::c_str()
{
	return this->str;
}
String::~String()
{
}
