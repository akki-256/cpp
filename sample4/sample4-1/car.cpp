#include "car.h"
#include <iostream>

using namespace std;

//  RXgN^
CCar::CCar() : m_fuel(0), m_migration(0)
{
	cout << "CCarIuWFNg¶¬" << endl;
}
//  fXgN^
CCar::~CCar()
{
	cout << "CCarIuWFNgjü" << endl;
}
void CCar::move()
{
	//  R¿ª éÈçÚ®
	if (m_fuel > 0) {
		m_migration++;  //  £Ú®
		m_fuel--;       //  R¿Áï
	}
	cout << "Ú®£:" << m_migration << endl;
	cout << "R¿" << m_fuel << endl;
}
//  R¿â\bh
void CCar::supply(int fuel)
{
	if (fuel >= 0) {
		m_fuel += fuel; //  R¿â
	}
	cout << "R¿" << m_fuel << endl;
}