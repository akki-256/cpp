#include <iostream>

using namespace std;

void showMaxMin(vector<string> vec) {
  string max = vec[0], min = vec[0];
  for (int i = 1; i < vec.size(); i++) {
    if (max.length() < vec[i].length()) max = vec[i];
    if (min.length() > vec[i].length()) min = vec[i];
  }
  cout << "最長: " << max << endl << "最短: " << min << endl;
}

int main() {
  vector<string> v;
  string input;
  while (true) {
    cout << "正整数値を入力(終了: 改行)" << endl;
    getline(cin, input);
    if (input.empty()) break;
    v.push_back(input);
  }
  showMaxMin(v);
  return 0;
}