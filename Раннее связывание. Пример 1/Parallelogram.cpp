#include "Parallelogram.h"
#include<iostream>
using namespace std;



Parallelogram::Parallelogram(double a, double b, double c1)
{
	m_value1 = a;
	m_value2 =b ;
	c = c1;

}

void Parallelogram::ShowArea()const {
	cout << "S" << m_value1 * m_value2 / 2;
}