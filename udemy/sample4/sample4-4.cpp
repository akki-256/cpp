#include <iostream>

using namespace std;

int main()
{
	int *p = 0;
	int i;
	p = new int[10];  // int^10ÂªÌÌæð®ImÛ
	for (i = 0; i<10; ++i)
	{
		p[i] = i;
		cout << p[i] << endl;
	}
	delete[] p;       // ®IÉmÛµ½Ìæððú
	return 0;
}