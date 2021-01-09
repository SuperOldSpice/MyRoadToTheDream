#include "head.h"
void input(string* s, int n, char buf[257])
{
	for (int i = 0; i <= n; i++)
	{
		cin.getline(buf, 257, '\n');
		s[i] = buf;
	}
	cout << endl;
}

int myxa(string* s, int n, vector<int>& A)
{
	int p = 0;
	for(int i = 1; i <= n; i++)
		for (int j = 0; j < (s[i].length() - 1); j++)
		{
			if (s[i][j] == s[i][j + 1] && (s[i][j] != ' '))
			{
				int k = 0;
				int m = j;
				while (s[i][j] == s[i][m + 1])
				{
					k++;
					m++;
				}
				s[i].erase(j + 1, m - j);
				s[i].insert(j + 1, "{"); 
				string b = to_string((k + 1));
				s[i].insert(j + 2, b);
				s[i].insert(j + 3, "}");
			
				A.push_back((k+1));
				p++;
			}
		}
	return p;
}

void matrix(int** m, vector<int>& A, int p)
{
	for (int i = 1; i <= p; i++)
	{
		m[i] = new int[p + 1];
	}
	
	for (int i = 1; i <= p; i++)
	{
		m[i][i] = A[i - 1];

		for (int j = p; j > i; j--)
		{
			m[i][j] = rand() % (A[0] + 1);
		}

		for (int j = 1; j < i; j++)
		{
			m[i][j] = rand() % (A[p - 1] + 1);
		}
	}

	cout << endl;
	for (int i = 1; i <= p; i++)
	{
		for (int j = 1; j <= p; j++)
		{
			cout << m[i][j] << " " ;
			
		}
		cout << endl;
	}
	cout << endl;

	int a, max = -1, nmax = -1;
	cin >> a;
	for (int i = p; i > 0; i--)
	{
		if (m[i][a] > max) 
		{
			max = m[i][a];
			nmax = i;
		}
	}
	cout << max << " " << nmax << endl;

	for (int i = nmax; i < p; i++)
	{
		for (int j = 1; j <= p; j++)
		{
			m[i][j] = m[i + 1][j];
		}
	}

	delete[]m[p];
	cout << endl;
	for (int i = 1; i < p; i++)
	{
		for (int j = 1; j <= p; j++)
		{
			cout << m[i][j] << " ";

		}
		cout << endl;
	}
	cout << endl;
	
}