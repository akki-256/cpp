#include <iostream>

using namespace std;

int main()
{
	int *p = 0;
	p = new int(); // int�^�̗̈�𓮓I�m��
	*p = 123;
	cout << *p << endl;
	delete p;    // ���I�Ɋm�ۂ����̈�����
	return 0;
}