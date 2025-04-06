#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int main() {
  std::map<std::string, std::string> map;
  std::string En[] = {"cat", "dog", "bird", "tiger"};
  std::string input;
  map[En[0]] = "猫";
  map[En[1]] = "犬";
  map[En[2]] = "鳥";
  map[En[3]] = "虎";
  while (true) {
    std::cout << "動物の名前を英語で入力 ";
    std::getline(std::cin, input);
    if (input == "") break;
    bool flg = std::find(std::begin(En), std::end(En), input) != std::end(En);
    if (flg) {
      std::cout << "日本語名: " << map[input] << std::endl;
    } else {
      std::cout << "対応するデータは登録されていません。" << std::endl;
    }
  }
}