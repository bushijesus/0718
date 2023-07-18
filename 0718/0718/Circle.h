#pragma once
class Circle
{
public:
	Circle();
	Circle(double r);
	Circle(const Circle & c);
	~Circle();
	void set_r(double r);
	double calc_area();
	double calc_circ();
private:
	double m_r;
};

