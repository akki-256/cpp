#include "newcalc.h"

#include <iostream>

using namespace std;

Newcalc::Newcalc() { cout << "Newcalc" << endl; }
Newcalc::~Newcalc() { cout << "~Newcalc" << endl; }
double Newcalc::mul() { return m_number1 * m_number2; }
double Newcalc::div() { return m_number1 / m_number2; }