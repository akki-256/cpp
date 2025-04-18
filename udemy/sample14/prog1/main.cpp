#include <iostream>

#include "vector3.h"

using namespace std;

void vec(string, Vector3&);

int main() {
  Vector3 v1, v2, v3, v4;
  //  ベクトルに値を代入
  v1.x = 1.0;
  v1.y = 2.0;
  v1.z = 4.0;
  v2 = v1;        //  値を代入
  v3 = 4.0 * v1;  //  ベクトルのスカラー倍
  v4 = v1 + v2;
  vec("v1=", v1);
  vec("v2=", v2);
  vec("v1 + v2=", v4);
  vec("v3=", v3);
  v3 += v1;  //  代入演算子（+=）
  vec("v3=", v3);
  v1 -= v2;  //  代入演算子（-=）
  vec("v1=", v1);
  return 0;
}

void vec(string vecname, Vector3& v) {
  cout << vecname << "(" << v.x << "," << v.y << "," << v.z << ")" << endl;
}