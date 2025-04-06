#include "fighter.h"

#include <iostream>

using namespace std;

Fighter::Fighter() { cout << "Fighterオブジェクト生成" << endl; }
Fighter::~Fighter() { cout << "Fighterオブジェクト破棄" << endl; }
void Fighter::fight() { cout << "戦闘する" << endl; }