#pragma once
#include <string>
#include <iostream>
using namespace std;

class String
{
public:
	String();
	String(string s);
	~String();
	void output();
	string c_str();
	string str;
};

