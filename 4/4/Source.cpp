#include <iostream>

using namespace std; 

int main()
{
	int n;
	cin >> n;
	int buf = 0;
	int* mas = new int[n];
	int max=0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				buf++;
			}
		}
		mas[i - 1] = buf;
		buf = 0;
	}

	int ind = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] >= max)
		{
			max = mas[i];
			ind = i;
		}
	}

	cout << ind+1<<"\n"<<max;

	return 0;
}