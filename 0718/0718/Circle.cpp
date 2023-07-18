#include "stdafx.h"
#include "Circle.h"


Circle::Circle(){
	this->m_r = 0;
}
Circle::Circle(double r) {
	m_r = r;
}
Circle::Circle(const Circle & c) {
	this->m_r = c.m_r;
}
void Circle::set_r(double r) {
	this->m_r = r;
}
double Circle::calc_area() {
	return 3.14 * m_r * m_r;
}
double Circle::calc_circ() {
	return 2 * 3.14 * m_r;
}
Circle::~Circle(){
}
