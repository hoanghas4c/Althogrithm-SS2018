#include<iostream>
#include <bits/stdc++.h>

using namespace std;

const int MN = 50;
const int D = 10;
const char * fn = " BIGNUMPLUS.INP";
int n;
int x[MN+D];

void read()
{
	ifstream f(fn);
	string s;
	n = 10;
	f >> s;
	int i , j;
	int len = s.length();
	memset(x,0,sizeof(x)); // all 0
	
	for(i = 2 ; i <= n ; ++i)
	{
		f >> s;
		cout << s << endl;
		for( j = 0 ; j < len ; ++j)
		{
			x[j+D] += (int)(s[j] - '0');
		}
			
	}	
	f.close();
	/*
	
	memcpy(x+d, x, 9*sizeof(int));
	cout << endl;
	for(int i = 0 ; i < 30 ; ++i)
		cout << " " << x[i];
	*/
	
	cout << endl;
	for( i = D ; i <= MN+len ; ++i)
	{
		cout << " "  << x[i];
	}
	
	//Nho
	int c = 0, t = 0;
	for(int i = len + D ; i >= D ; --i)
	{
		t = x[i] + c;
		x[i] =  t%10;
		c = t/10;
	}
	
	while( x >0)
	
}


int main()
{
	read();
	
	return 0;
}

