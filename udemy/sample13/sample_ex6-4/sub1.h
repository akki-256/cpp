#ifndef _SUB1_H_
#define _SUB1_H_

#include "sup1.h"

class CSub1 : public CSup1 {
public:
	CSub1() { cout << "CSub1�̃R���X�g���N�^" << endl; }
	~CSub1() { cout << "CSub1�̃f�X�g���N�^" << endl; }
};

#endif // _SUB1_H_
