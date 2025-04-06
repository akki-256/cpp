#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

void my_push(list<int>* l, int input) {
  list<int>::iterator itr = l->begin();
  if (l->empty()) {
    l->push_back(input);
  } else {
    while (itr != l->end()) {
      if (*itr < input) {
        itr++;
      } else {
        break;
      }
    }
    l->insert(itr, input);
  }
}

int main() {
  list<int> l;
  int input;
  while (true) {
    cout << "正整数値を入力(終了: \"'-1\")" << endl;
    cin >> input;
    if (input == -1) break;
    my_push(&l, input);
  }
  cout << "表示";
  for_each(l.begin(), l.end(), [](int i) { cout << i << " "; });
  cout << endl;
  return 0;
}