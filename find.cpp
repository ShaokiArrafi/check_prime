#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int i, fn, ln, num, div, root, flag;

	while (1<2)
	{
		cin >> fn;
		cin >> ln;
		cout << "\n";
		i = 0;

		for (num = fn; num <= ln; num++)
		{
			root = floor(sqrt(num));

			if (num<2)
			{}
			else if (num == 2)
			{
				cout << "2" << "\t";
				i = i + 1;
			}
			else
			{
				flag = 0;
				for (div = 2; div <= root; div++)
				{
					if (num % div == 0)
					{
						flag = 1;
						break;
					}
				}
				if (flag == 0)
				{
					cout << num << "\t";
					i = i + 1;
				}
			}
		}

		cout << endl << endl << i << endl << endl;

	}

	return 0;
}