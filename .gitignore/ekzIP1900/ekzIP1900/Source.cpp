#include "head.h"

int main()
{
	srand(time(NULL));
	int n, m, k;
	cin >> n >> m;
	int** a = new int* [n + 1];
	generate(a, n, m);
	k = search(a, n, m);
	cout << k << endl << endl;
    change(a, n, m, k);
}