#include "stdafx.h"
#include "Student.h"
#include <iostream>
using namespace std;


Student::Student()
{
		this->m_name = "";
		this->m_age = 0;
}

void Student::stuInput()
{
	cout << "请输入学生的姓名和年龄" << endl;
	cin >> m_name >>m_age;
}

void Student::stuOutput()
{
		cout << "姓名： " << this->m_name << " 年龄： " << this->m_age << endl;
}

Student::~Student()
{
}
