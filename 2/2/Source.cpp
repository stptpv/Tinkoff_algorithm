#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *mas=new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		if (mas[i + 1] > mas[i])
		{
			mas[i + 1] = mas[i];
		}

	}
	for (int i = 0; i < n; i++)
	{
		cout << mas[i]<<" ";
	}
	return 0;

}