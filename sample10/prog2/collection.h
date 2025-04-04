#ifndef _COLLECTION_H_
#define _COLLECTION_H_

#include <iostream>

template <typename T>
class Collection {
 private:
  T* m_pArray;
  int m_lenght;

 public:
  Collection(T* array, int lenght) {
    m_pArray = new T[lenght];
    m_lenght = lenght;
    for (int i = 0; i < m_lenght; i++) {
      m_pArray[i] = array[i];
    }
  };
  ~Collection() { delete[] m_pArray; }

  T getMax() {
    T max = m_pArray[0];
    for (int i = 1; i < m_lenght; i++) {
      if (max < m_pArray[i]) {
        max = m_pArray[i];
      }
    }
    return max;
  };
  T getMin() {
    T min = m_pArray[0];
    for (int i = 1; i < m_lenght; i++) {
      if (min > m_pArray[i]) {
        min = m_pArray[i];
      }
    }
    return min;
  };
  void showArray() {
    for (int i = 0; i < m_lenght; i++) {
      std::cout << m_pArray[i] << " ";
    }
    std::cout << std::endl;
  };
};

#endif