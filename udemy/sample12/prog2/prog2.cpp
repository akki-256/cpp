#include <iostream>
#include <map>
#include <string>

int main() {
  std::map<std::string, std::string> map;
  std::string num[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
  std::string kanji[] = {"⚪︎", "一", "二", "三", "四",
                         "五", "六", "七", "八", "九"};
  for (int i = 0; i < 10; i++) {
    map[num[i]] = kanji[i];
  }
  std::string input;
  std::cout << "整数値を入力";
  getline(std::cin, input);
  std::string result;
  for (int i = 0; i < input.length(); i++) {
    result += map[input.substr(i, 1)];
  }

  std::cout << "result" << result << std::endl;
  return 0;
}