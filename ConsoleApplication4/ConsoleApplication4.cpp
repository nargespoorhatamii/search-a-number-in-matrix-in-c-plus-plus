#include<iostream>
using namespace std;
int Main()
{
	int a[10][10], n, c = 0;
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			cin >> a[i][j];

		}
		
	}
	cin >> n>>c;
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (a[i][j] == n)
			{
				c++;
			}
		}
	}
	return 0;
	}