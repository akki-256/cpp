#ifndef _FIGHTER_H_
#define _FIGHTER_H_

#include "airplane.h"

class Fighter : public Airplane {
 public:
  Fighter();
  virtual ~Fighter();
  void fight();
};

#endif