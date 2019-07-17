#include <iostream>
#include <math.h>
using std::cin;
using std::cout;
int main()
{
	int a, b,m,n,count=0,sqa;
	cin >> n>> m;
	a = sqrt(n);
	b = 0;
	while ( a >= 0 )
	{
		b = abs(pow(a, 2) - n);
		if ( pow(a, 2) + b == n && a + pow(b, 2) == m )
		{
			count++;
			
		}
		a--;	
	}
	cout << count;
	return 0;
}