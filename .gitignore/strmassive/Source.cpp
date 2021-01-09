#include "head.h"

int main()
{
	int a, b;
	float c;
	setlocale(LC_ALL, "ukr");
	
	string* s = new string[4];
	for (int j = 1; j <= 3; j++)
	{
		cin >> a >> b >> c;
		cout << endl;
		push(s, a, b, c, j);
		cout << "Рядок №" << j;
		count(s, a, b, c);
	}

	for (int j = 1; j <= 3; j++)
	{
		cout << s[j] << endl;
	}
	cout << endl;
	


}