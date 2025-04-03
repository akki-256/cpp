#ifndef _NEWCALC_H_
#define _NEWCALC_H_

#include "fundcalc.h"

class Newcalc : public FundCalc {
 public:
  Newcalc();
  ~Newcalc();
  double mul();
  double div();
};

#endif