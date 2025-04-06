#include <iostream>

#include "bar.h"
#include "foo.h"

using namespace std;
int main() {
  Foo* pFoo;
  Bar* pBar;
  pBar->func1(pFoo);
  pBar->func2();
  pFoo->fuga(pBar);
  pFoo->hoge();
  return 0;
}