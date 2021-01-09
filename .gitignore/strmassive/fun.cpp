#include "head.h"
void push(string* s, int a, int b, float c, int j)
{
	string f;
	f = to_string(a);
	s[j].insert(0, f);
	s[j].push_back(' ');
	f = to_string(b);
	s[j].insert(s[j].length(), f);
	s[j].push_back(' ');
	f = to_string(c);
	s[j].insert(s[j].length(), f);
}

void count(string* s, int a, int b, float c)
{
	int k = 0;
	if (a > 0)k++;
	if (b > 0)k++;
	if (c > 0)k++;
	cout << " Додатніх дійсних числел: " << k << endl;
}