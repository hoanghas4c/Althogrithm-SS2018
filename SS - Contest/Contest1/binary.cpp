#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int n = 0;

void bionary(int x)
{
	int c[10]; 
	int i;
	for(i = 0 ; x > 0 ; ++i)  
	{  
		c[i] = x % 2;  
		x /= 2;  
	}  
	
	for(i = i-1 ; i >= 0 ; --i)  
	{  
		cout << c[i];  
	}  
	
	cout << " ";
}

void out(int x)
{
	for(int j = 1 ; j <= x ; ++j)
	{
		bionary(j); 
	}
}


int main()
{
	cin >> n;
	
	int a[n];
	for(int  i = 0 ; i < n ; ++i)
	{
		cin >> a[i];
	}
	
	for(int  i = 0 ; i < n ; ++i)
	{
		out(a[i]);
		cout << endl;
	}
	
	return 0;
}

