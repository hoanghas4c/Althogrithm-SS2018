#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}

void sapXep(int n, int a[], int b[])
{
	for(int i = 0 ; i < n ; ++i)
	{
		for(int j = i+1 ; j < n ; ++j)
		{
			if(a[i] > a[j])
			{
				swap(&a[i], &a[j]);
				swap(&b[i], &b[j]);
			}
		}
	}
}

void insert(int n, int c[], int d[])
{
	for(int i = 0 ; i < n ;++i)
	{
		cin >> c[i];
		cin >> d[i];
	}
}

void run(int n, int a[], int b[])
{
	cin >> n;
	insert(n,a,b);
	sapXep(n,a,b);
	int time = a[0] + b[0];
	for(int i = 1 ; i < n ; i++)
	{
		if(time <= a[i])
		{
			time = a[i] + b[i];
		}
		else if(time > a[i])
			{
				time += b[i];
			}
	}
	
	cout << time << endl;
	
}


int main()
{
	int n = 0;
	int a[100];
	int b[100];
	
	run(n,a,b);
	return 0;
}

