#include<stdio.h>

#define MAX 100000

using namespace std;

int MIN(int x, int b[])
{
	int min = b[0];
	for(int i = 1 ; i < x ; ++i)
	{
		if(min >= b[i])
			min = b[i];
	}
	return min;
}

void run(int n, int k, int ar[])
{
	int d = n - k + 1;
	int count[d] = {0};
	for(int i = 0 ; i <= d ; ++i)
	{
		for(int j = i ; j < i + k ; ++j)
		{
			count[i] += ar[j];
		}
	}
	
	printf("%d", MIN(d,count));
}



int main()
{
	int n, k, b;
	scanf("%d",&n);
	int ar[MAX] = {};
	scanf("%d", &k);
	scanf("%d", &b);
	int j;
	for(int i = 0 ; i < b ; ++i)
	{
		scanf("%d",&j);
		ar[j-1] = 1;
	}
	
	run(n,k,ar);
	return 0;
}
