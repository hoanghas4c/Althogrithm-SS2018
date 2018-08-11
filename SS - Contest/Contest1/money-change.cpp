/*
--------------------------
----------------Bai-toan-doi-tien-----------
---------------------------
*/

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

	int n = 0;
	int b[10] = { 1000,500,200,100,50,20,10,5,2,1};

int moneyChange(int x)
{
	int s = 0;
	int count[10] = {' '};
	for( int i = 0 ; i < 10 ; ++i)
	{
		count[i] = x / b[i];
		x = x % b[i];
	}
	
	for(int i = 0 ; i < 10 ; ++i)
	{
		s += count[i];
	}
	
	return s;
}

int main()
{
	cin >> n;
	int a[n];
	for( int i = 0 ; i < n ; ++i)
	{
		cin >> a[i] ;
	}
	
	for(int i = 0 ; i < n ; ++i)
	{
		cout << moneyChange(a[i]) << endl;
	}
	
	return 0;
}

