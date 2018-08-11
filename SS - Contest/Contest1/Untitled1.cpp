#include<iostream>
#include <bits/stdc++.h>

using namespace std;

const int MAX = 100000;


void insert(int &n, unsigned int &k, unsigned int a[])
{
	cin >> n >> k;
	
	for(int i = 0 ; i < n ; ++i)
	{
		cin >> a[i];
	}
}

int binarySearch(int n,unsigned int x , unsigned int a[])
{
	int left = 0;
	int right = n - 1;
	
	while(right >= left)
	{
		int mid = (right + left) / 2;
		if( x == a[mid])
		{
			return mid;
		}
		else if ( x < mid)
				right = mid - 1;
		else if ( x > mid)
				left = mid + 1;
	}
	
	return -1;
}

void run(int &t, int &n, unsigned int &k, unsigned int a[])
{
	cin >> t;
	int result[MAX]; 
	
	for(int i = 0 ; i < t ; ++i)
	{
		insert(n,k,a);
		
		result[i] = binarySearch(n,k,a);
	}
	
	for(int i = 0 ; i < t ; ++i)
	{
		if( result[i] == -1)
		{
			cout << " NO " << endl;
		}
		else cout << result[i] + 1 << endl;
	}
}



int main()
{
	int t = 0;
	int n = 0;
	unsigned k = 0;
	unsigned int a[MAX]= {0};
	
	run(t,n,k,a);
	
	return 0;
}

