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
	cout << "�������������������ͼ۸�" << endl;
	cin >> this->bookName >> this->writerName >> this->bookPrice;
}
void Book::bookOutput() {
	cout << "����Ϊ�� " << this->bookName << endl;
	cout << "������Ϊ�� " << this->writerName << endl;
	cout << "�۸�Ϊ�� " << this->bookPrice << endl;
}
Book::~Book()
{
}
