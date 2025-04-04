#include <iostream>

using namespace std;

void showMaxMin(vector<int> vec) {
  int max = vec[0], min = vec[0];
  for (int i = 1; i < vec.size(); i++) {
    if (max < vec[i]) max = vec[i];
    if (min > vec[i]) min = vec[i];
  }
  cout << "最大: " << max << endl;
  cout << "最小: " << min << endl;
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