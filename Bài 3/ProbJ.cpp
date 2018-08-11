#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void insert(int m, int n,int max, int a[], int b[], int c[])
{
	if( m > n)
	{
		for(int i = 0; i < m ; ++i)
		{
			c[i] = 0;
			cin >> a[i];
		}
		
		for(int i = 0; i < n ; ++i)
		{
			cin >> b[i];
		}
	}
	
	else
	{
		for(int i = 0 ; i < m ; ++i)
		{
			cin >> a[i];
		}
		
		for(int i = 0 ; i < n ; ++i)
		{
			c[i] = 0;
			cin >> b[i];
		}
	}
}

int main()
{
	int m, n;
	int a[m], b[n];
	scanf("%d%d", &m, &n);
	int max = 0;
	if(m >= n)
	{
		max = m;
	}
	else max = n;
	int c[max];
	
	insert(m,n,max,a,b,c);
	
	for(int i = 0 ; i < m ; ++i)
	{
		for(int j = 0 ; j < n ;  ++j)
		{
			if(a[i] == b[j])
			{
				cout << a[i] <<' ';
			}
		}
	}
	
	
	return 0;
}

