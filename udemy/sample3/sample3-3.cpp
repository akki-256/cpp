#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	s = "This is a";    //  �ŏ��̕�����
	s.append(" pen.");  //  ������̒ǉ�
	cout << s << endl;
	cout << "������̒����F" << s.length() << endl;
	//  printf�ŕ\��
	printf("char*:%s\n", s.c_str());
	return 0;
}