#include<iostream>
#include <bits/stdc++.h>

using namespace std;

const int MN = 4000000;
bitset<MN+1> p; // dung de danh dau

void sieve(int n)
{
	p.set(); //all 1
	p[1] = 0;
	for(int i = 2 ;  i <= (int)sqrt(n) ; ++i)
	{
		if(p[i])
		{
			for(int j = i*i ; j <= n ; j+=i)
			{
				p[j] = 0;
			}
		}
	}	
}

int twins(int n)
{
	int d = 0;
	sieve(n);
	for( int i = 5 ; i < n ; ++i)
	{
		if(p[i-2] && p[i])
//			cout << " (" << i-2 << ":" << i <<") " << endl;
			++d;
//		if(d % 5 == 0) cout << endl;	
	}
	cout << "\n Total " << d << "pair(s)." << endl;
	
	return d;
}



int main()
{
	twins(MN);
	return 0;
}

