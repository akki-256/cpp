#include <iostream>

using namespace std;

int main()
{
	int *p = 0;
	p = new int(); // int^ÌÌæð®ImÛ
	*p = 123;
	cout << *p << endl;
	delete p;    // ®IÉmÛµ½Ìæððú
	return 0;
}