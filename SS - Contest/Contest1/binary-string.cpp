#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int bi[2] = { 0, 1};

void Try(int i, int x,int y)
{
	for(int j = 0 ; j <= 1 ; ++j)
	{
		bi[i] = j;
//		if(i == x)
//		{
//			cout << x;
//			return;
//		}
//		Try(i+1,x,y);
		if (i == n[test]-1)
			result();
		else Try(i+1,test);
	}
	
}

int main()
{
	int a[10][2];
	int t;
	cin >> t;
	
	for(int i = 0 ; i < t ; ++i)
	{
		for(int j = 0 ; j < 2 ; ++j)
		{
			cin >> a[i][j];
		}
		cout << endl;
	}
	
	for(int i = 0 ; i < t ; ++i)
	{
		Try(0,a[i][0],a[i][1]);
		cout << endl;
	}
	
	
	return 0;
}

