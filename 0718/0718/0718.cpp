// 0718.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "String.h"
#include "Book.h"
#include "File.h"
#include "Student.h"
#include "Circle.h"
using namespace std;

void test71801() {
	/*String str1;
	String str2("oho");*/

	/*String str3[10];*/

	/*String();*/

	/*String * s = new String();
	delete s;*/

	String s1;
	String s2(s1);
	String s3 = s2;
}


void test71802() {
	Book book1;
	book1.bookInput();
	book1.bookOutput();
	Book book2("围城", "钱钟书", 68);
	book2.bookOutput();
}

void test71803() {
	int num = 0;
	cout << "请输入学生人数" << endl;
	cin >> num;
	Student * s = new Student[num];
	// 输入数据
	for (int i = 0; i < num; i++)
	{
		s[i].stuInput();
	}
	// 根据年龄排序
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (s[j].m_age > s[j+1].m_age)
			{
				Student tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}

	}
	// 输出排序后的结果
	for (int i = 0; i < num; i++)
	{
		s[i].stuOutput();
	}
	delete[]s;
}
void test71804() {
	String s("mars");
	s.output();
	cout << s.c_str() << endl;
}
void test71805() {
	File f("test.txt");
	f.writeFile("123\n");
	f.writeFile("456\n");
	f.writeFile("789\n");
}
void test71806() {
	Circle c1;
	Circle c2(5);
	cout << c2.calc_area() << endl;
	cout << c2.calc_circ() << endl;
}
int main()
{
	test71803();
    return 0;
}

