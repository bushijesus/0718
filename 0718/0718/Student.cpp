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
	cout << "������ѧ��������������" << endl;
	cin >> m_name >>m_age;
}

void Student::stuOutput()
{
		cout << "������ " << this->m_name << " ���䣺 " << this->m_age << endl;
}

Student::~Student()
{
}
