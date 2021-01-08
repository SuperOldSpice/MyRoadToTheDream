#include "head.h"

void generate(int** a, int n, int m)
{
	for (int i = 1; i <= n; i++)
	{
		a[i] = new int[m + 1];
		for (int j = 1; j <= m; j++)
		{
			a[i][j] = rand() % 3891 - 1990;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << setw(5) << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
			
}

int search(int** a, int n, int m)
{
	int* b = new int[m + 1];
	int k, k1;
	for (int i = 1; i <= m; i++)
	{
		k = 0;
		for (int j = 1; j < n; j++)
		{
			if (a[j][i] > a[j + 1][i])k++;
		}
		if (k == (n - 1)) { b[i] = 1; }
		else b[i] = 0;
	}

	k = 0;
	for (int i = 1; i <= m; i++)
	{
		cout << b[i] << " ";
		if (b[i] == 1)k++;
	}
	cout << endl << endl;

	int min = 2000;
	if (k == 0)
	{
		int e;
		if (n > m) e = m;
		else e = n;
		
		for (int i = 1; i <= e; i++)
		{
			if (a[i][i] < min) { min = a[i][i]; k1 = i; }
		}		
	}
	else
	{
		for (int i = 1; i <= m; i++)
		{
			if (b[i] == 1)
			{
				if (a[n][i] < min) { min = a[n][i]; k1 = i;}
			}
		}
	}
	cout << min << endl << endl;
	delete []b;
	return k1;
}

void change(int** a, int n, int m, int k)
{
	int* b = new int[n + 1];
	for (int i = 1; i <= n; i++)
	{
		b[i] = a[i][k];
	}
	
	for (int i = k; i < m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			a[j][i] = a[j][i + 1];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		 a[i][m] = b[i];
	}
	delete[]b;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << setw(5) << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}