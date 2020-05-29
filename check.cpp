#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int num, div, root, flag;

	while (1<2)
	{
		cin >> num;
		root = floor(sqrt(num));

		if (num<2)
		{
			cout << "not prime" << endl;
		}
		else if (num == 2)
		{
			cout << "prime" << endl;
		}
		else
		{
			flag = 0;
			for (div = 2; div <= root; div++)
			{
				if (num % div == 0)
				{
					cout << "not prime" << endl;
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				cout << "prime" << endl;
			}
		}
	}

	return 0;
}