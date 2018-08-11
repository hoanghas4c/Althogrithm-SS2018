#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int divisible(int x)
{
	if(x % 2 == 0)
		return 1;
	else return 0;	
}

int element(long long x)
{
	long long count = 0;
	for(long long i = 1 ; i <= sqrt(x) ; ++i)
	{
		if( x % i == 0)
		{
			if(divisible(i))
				count ++;
			long long a = x / i;
			if( a != i && divisible(a))
				count ++;	
		}
	}
	
	return count;
}


int main()
{
	int n;
	long long a[n];
	cin >> n;
	for(int i = 0 ; i < n ; ++i)
	{
		cin >> a[i];
		cout << element(a[i]) << endl;	
	}

	return 0;
}

