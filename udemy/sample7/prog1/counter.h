#ifndef _COUNTER_H_
#define _COUNTER_H_

//  カウンタークラス
class Counter {
 private:
  //  カウント
  int m_count;

 public:
  //  コンストラクタ
  Counter();
  //  カウンタをリセット
  void reset();
  //  カウントされた回数を取得
  int getCount();
  //  1ずつカウント
  void count();
  // 引数文カウント
  void count(int n);
};

#endif  // _COUNTER_H_