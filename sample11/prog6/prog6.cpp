#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

void removeOnry2(list<int> l) {
  l.remove_if([](int x) {
    if (x == 2) {
      cout << "remove 2" << endl;
      return true;
    }
    return false;
  });
  for_each(l.begin(), l.end(), [](int x) { cout << x << " "; });
  cout << endl;
}

int main() {
  list<int> l;
  int input;
  while (true) {
    cout << "正整数値を入力(終了: \"'-1\")" << endl;
    cin >> input;
    if (input == -1) break;
    l.push_back(input);
  }
  removeOnry2(l);
  return 0;
}