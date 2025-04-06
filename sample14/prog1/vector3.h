#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>
#include <string>

class Vector3 {
 public:
  double x;
  double y;
  double z;

  Vector3& operator=(const Vector3& v);
  Vector3& operator+=(const Vector3& v);
  Vector3& operator-=(const Vector3& v);
};

//  +演算子のオーバーロード
Vector3 operator+(const Vector3&, const Vector3&);
//  -演算子のオーバーロード
Vector3 operator-(const Vector3&, const Vector3&);
//  *演算子のオーバーロード
Vector3 operator*(const double, const Vector3& v);

#endif