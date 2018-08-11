#include<stdio.h>
#include<math.h>
#include<iostream>

const int MN = 2000000;
int fac[MN+1]; // fac[5] = 2


int Tau(int n)
{
	int count = 2;
	int can = (int) sqrt(n);
	for(int i = 2 ; i <= (int) sqrt(n) ; i++)
	{
		if(n%i==0)
		{
			count+=2;
		}
	}	
	
	return (can * can == n) ? count -1 : count ;
}

// FInd a number having max factors
int problem1(int n)
{
	int t;
	int maxTau = 1;
	int maxNum = 1;
	for(int i = 2 ; i <=n ; i++)
	{
		t = Tau(i);
		if(t >= maxTau)
		{
			maxTau = t ;
			maxNum = i ;
		}
	}
	
	return maxNum;
}

// Find factor numbers of all numbers below or equal to
// factor
void MultiTau(int n)
{
	// 2 , 3  4: 2 , 6 : 3
	for(int i = 1; i <= n ; i++)	fac[i] = 1;
	for(int i = 2; i <= n/2 ; i++)
	{
		// Tang cac boi cua i 
		for(int j = i ; j <= n ; j+=i)
		{
			++fac[j];
		}
	}
}


int main()
{
	MultiTau(100);
	printf("%d", MultiTau(100));
	
//	std:: cout << problem1(2e6);
	
	return 0;
}

