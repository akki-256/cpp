#include <algorithm>
#include <iostream>
#include <list>
#include <string>

void removemore5lenghtstring(std::list<std::string>* l) {
  for (std::list<std::string>::iterator itr = l->begin(); itr != l->end();) {
    if (itr->length() > 4) {
      itr = l->erase(itr);
    } else {
      itr++;
    }
  }
}

int main() {
  std::list<std::string> l;
  std::string input;
  while (true) {
    std::cout << "文字列をを入力(終了: 改行)" << std::endl;
    std::getline(std::cin, input);
    if (input == "") break;
    l.push_back(input);
  }
  removemore5lenghtstring(&l);
  std::cout << "表示";
  for (auto&& s : l) {
    std::cout << s << " ";
  }
  std::cout << std::endl;
  return 0;
}