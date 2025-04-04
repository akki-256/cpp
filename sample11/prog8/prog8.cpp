#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

void removemore5lenghtstring(list<string>* l) {
  for (list<string>::iterator itr = l->begin(); itr != l->end();) {
    if (itr->length() > 4) {
      itr = l->erase(itr);
    } else {
      itr++;
    }
  }
}

int main() {
  list<string> l;
  string input;
  while (true) {
    cout << "文字列をを入力(終了: 改行)" << endl;
    getline(cin, input);
    if (input == "") break;
    l.push_back(input);
  }
  removemore5lenghtstring(&l);
  cout << "表示";
  for (auto&& s : l) {
    cout << s << " ";
  }
  cout << endl;
  return 0;
}