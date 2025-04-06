#include <iostream>

using namespace std;

void showVec(vector<int> vec) {
  vector<int> even;
  vector<int> odd;
  int i = 0;
  while (i < vec.size()) {
    if (vec[i] % 2 == 0) {
      even.push_back(vec[i]);
    } else {
      odd.push_back(vec[i]);
    }
    i++;
  }
  cout << "偶数:";
  for_each(even.begin(), even.end(), [](int x) { cout << x << " "; });
  cout << endl << "奇数:";
  for_each(odd.begin(), odd.end(), [](int x) { cout << x << " "; });
  cout << endl;
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
  showVec(v);
  return 0;
}