#include "head.h"

int main()
{
	int n;
	cin >> n;
	char buf[257];
	string* s = new string[n + 1];
	vector<int> A;
	input(s, n, buf);
	int p = myxa(s, n, A);
	for (int i = 1; i <= n; i++)
	{
		cout << s[i];
		cout << endl;
	}
	
	for (int i = 0; i < p; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	int** m = new int* [n + 1];
	srand(time(NULL));
	matrix(m, A, p);

}