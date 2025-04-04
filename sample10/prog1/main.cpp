#include <iostream>
#include <string>

template <typename T>
T Tmax(T a, T b) {
  if (a > b) {
    return a;
  }
  return b;
};

using namespace std;

int main() {
  cout << Tmax<int>(1, 2) << endl;
  cout << Tmax<double>(1.75, 3.12) << endl;
  string s1 = "aiu", s2 = "eo";
  cout << max<string>(s2, s1) << endl;
  return 0;
}
