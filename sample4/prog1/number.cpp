#include "number.h"

#include <iostream>

//  二つの数値を設定
Number::Number() : a(0), b(0) { std::cout << "インスタンス化" << std::endl; }

Number::~Number() { std::cout << "インスタンス破棄" << std::endl; }
void Number::setNumbers(int n1, int n2) {
  a = n1;
  b = n2;
}
int Number::getAdd() { return a + b; }