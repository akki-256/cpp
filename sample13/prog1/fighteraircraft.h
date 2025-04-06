#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H

#include <iostream>
#include <string>

#include "airplane.h"

using namespace std;

//  戦闘機クラス
class FighterAircraft : public AirPlane {
 public:
  //  コンストラクタ
  FighterAircraft();
  //  戦闘する
  void fly();
  void fight();
};

#endif  // _FIGHTERAIRCRAFT_H_