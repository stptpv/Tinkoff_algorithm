#include <iostream>

using namespace std;

int main()
{
	int arr[4][4] = { 0 };
	char txt[1024];
	int i = 0;

	cin >> txt;

	while (txt[i] != '\0')
	{
		int adr = -1;
		int adr2[2] = { 0,0 };
		if (txt[i] == '0')
		{
			for (int j = 0; j < 3; j++)
			{
				for (int o = 0; o < 4; o++)
				{
					if (arr[j][o] == 0 and arr[j + 1][o] == 0)
					{
						adr = o + 1;
						arr[j][o] = 1;
						arr[j + 1][o] = 1;
						cout << j + 1 << " " << adr << endl;
						break;
					}
				}
				if (adr != -1)
				{
					break;
				}
			}
		}
		else
		{
			for (int j = 0; j < 4; j++)
			{
				for (int o = 0; o < 3; o++)
				{
					if (arr[j][o] == 0 and arr[j][o + 1] == 0)
					{
						adr = j + 1;
						arr[j][o] = 1;
						arr[j][o + 1] = 1;
						cout << adr << " " << o + 1 << endl;
						break;
					}
				}
				if (adr != -1)
				{
					break;
				}
			}
		}

		for (int q = 0; q < 4; q++) {
			for (int j = 0; j < 4; j++)
			{
				int check = 0;
				for (int o = 0; o < 4; o++)
				{
					if (arr[j][o] == 1) { check++; }
				}
				if (check == 4)
				{
					for (int o = 0; o < 4; o++)
					{
						arr[j][o] = 0;
					}
				}
			}
		}

		for (int q = 0; q < 4; q++) {
			for (int j = 0; j < 4; j++)
			{
				int check = 0;
				for (int o = 0; o < 4; o++)
				{
					if (arr[o][j] == 1) { check++; }
				}
				if (check == 4)
				{
					for (int o = 0; o < 4; o++)
					{
						arr[o][j] = 0;
					}
				}
			}
		}
		i++;
	}
}