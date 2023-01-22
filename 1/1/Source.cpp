#include <iostream>

using namespace std;

int main()
{
	int n, otvet=1;
	cin >> n;
	int a = 0;
	if (n % 3 == 0)
	{
		a = n / 3;
		for (int i = 0; i < a; i++)
		{
			otvet *= 2;
		}
	}
	else
	{
		otvet = 0;
	}
	cout << otvet;
	return 0;
}