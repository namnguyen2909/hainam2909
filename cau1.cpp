#include <iostream>
using namespace std;
int main()
{
	int n1,n2,sum;
	cin >> n1 >> n2;
	if (n1<n2)
	{
		for (int i=n1;i<=n2;i++)
		{
			sum += i;
		}
	}
	cout << sum <<endl;
	return 0;
}