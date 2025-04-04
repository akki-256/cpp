#include <iostream>

using namespace std;

void showMaxMin(vector<int> vec) {
  for (int i = 0; i < 11; i++) {
    bool flg = false;
    cout << "一の位が" << i << ": ";
    for_each(vec.begin(), vec.end(), [&i, &flg](int x) {
      if (x % 10 == i) {
        cout << x << " ";
        flg = true;
      }
    });
    if (!flg) cout << "なし";
    cout << endl;
  }
}

int main() {
  vector<int> v;
  int input;
  while (true) {
    cout << "正整数値を入力(終了: \"'-1\")" << endl;
    cin >> input;
    if (input == -1) break;
    v.push_back(input);
  }
  showMaxMin(v);
  return 0;
}