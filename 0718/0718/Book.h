#pragma once
#include <string>
using namespace std;
class Book
{
public:
	Book();
	Book(string bname, string wname, int bprice);
	~Book();

	string bookName;
	string writerName;
	double bookPrice;
	void bookInput();
	void bookOutput();
};

