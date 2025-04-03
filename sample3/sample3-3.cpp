#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	s = "This is a";    //  Å‰‚Ì•¶š—ñ
	s.append(" pen.");  //  •¶š—ñ‚Ì’Ç‰Á
	cout << s << endl;
	cout << "•¶š—ñ‚Ì’·‚³F" << s.length() << endl;
	//  printf‚Å•\¦
	printf("char*:%s\n", s.c_str());
	return 0;
}