#include "stdafx.h"
#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book()
{
	this->bookPrice = 0;
	this->bookName = "";
	this->writerName = "";
}

Book::Book(string bname, string wname, int bprice) {
	this->bookName = bname;
	this->writerName = wname;
	this->bookPrice = bprice;
}
void Book::bookInput() {
	cout << "请输入书名、作者名和价格" << endl;
	cin >> this->bookName >> this->writerName >> this->bookPrice;
}
void Book::bookOutput() {
	cout << "书名为： " << this->bookName << endl;
	cout << "作者名为： " << this->writerName << endl;
	cout << "价格为： " << this->bookPrice << endl;
}
Book::~Book()
{
}
