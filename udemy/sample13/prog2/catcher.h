#ifndef _CATHER_H_
#define _CATHER_H_

#include "baseballplayer.h"

class Catcher : public BaseballPlayer {
 public:
  Catcher(string name, int number);
  void play();
};
#endif