#include <iostream>

using namespace std;

void showMaxMin(vector<string> vec) {
  vector<string> max, min;
  max.push_back(vec[0]);
  min.push_back(vec[0]);
  for (int i = 1; i < vec.size(); i++) {
    if (max[0].length() < vec[i].length()) {
      max.clear();
      max.push_back(vec[i]);
    } else if (max[0].length() == vec[i].length()) {
      max.push_back(vec[i]);
    }
    if (min[0].length() > vec[i].length()) {
      min.clear();
      min.push_back(vec[i]);
    } else if (min[0].length() == vec[i].length()) {
      min.push_back(vec[i]);
    }
  }
  cout << "最長: ";
  for_each(max.begin(), max.end(), [](string s) { cout << s << " "; });
  cout << endl << "最短: ";
  for_each(min.begin(), min.end(), [](string s) { cout << s << " "; });
  cout << endl;
}

int main() {
  vector<string> v;
  string input;
  while (true) {
    cout << "正整数値を入力(終了: 改行)" << endl;
    getline(cin, input);
    if (input.empty()) break;
    v.push_back(input);
    cout << "kakunou" << endl;
  }
  showMaxMin(v);
  return 0;
}