#include <iostream>

using namespace std;

void ref(int& n) { n += 3; }

int main() {
  int a = 7;
  int& n = a;
  cout << "a= " << a << endl;
  ref(n);
  cout << "a= " << a << endl;
  return 0;
}
