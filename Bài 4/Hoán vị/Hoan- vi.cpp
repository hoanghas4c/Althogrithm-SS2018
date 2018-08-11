#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int chuSo(int x)
{
	int a = x;
	int count = 0;
	while( a > 0)
	{
		count++;
		a = a/10;
	}
	
	return count;
}

string next(string s)
{
	cout << " \n Input : " << s << endl;
	
	// Phase 1 : find the breakpoint
	int n = s.length();
	cout << " length " << n << endl;
	int i,j;
	for(i = n - 2 ;  i>= 0 ; i--)
	{
		if(s[i] > s[i+1])	
			cout << " BreakPoint is " << i << ' ' << s[i] << endl;
			break;		
		if ( i < 0 )
		{
			cout << " \n No solution. ";
			return " ";
		}
	}
	
	// Phase 2 : find the RisePoint
	for(j = n-1 ;  j > i ; --j)
	{
		if( s[j] > s[i]) break;
	}
	
	char c = s[i] ;
	s[i] = s[j];
	s[j] = c ;
	
	// Reverse s[i+1 .. n-1]:
	// ---- 8  4432  1
	// 123448
	++i;
	j = n - 1;
	while( i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		++i;
		--j;
	}
	
	cout << " \n Output : " << s;
	return s;
}

int main()
{
	next("");
	
	return 0;
}

