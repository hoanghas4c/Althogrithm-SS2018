/*-------------------------------------
HAM VIET MA PHUONG
*				*
		*
--------------------------------------*/
#include<iostream>
#include <bits/stdc++.h>

using namespace std;


int m[100][100];

void print(int n)
{
	for(int i = 1 ; i <= n ; i++)
	{

		for(int j = 1 ; j <= n ; j++)
		{
			cout << m[i][j]<<" ";
		}
		cout << endl;
	}
}

void oddMagic(int n)
{
	memset(m , 0, sizeof(m));
	int i, j, v;
	i = 1; j = n/2 +1 ;
	m[i][j] = 1;
	int nn= n*n;
	for(int k =2 ; k <= nn; k++)
	{
		// Tim vi tri (i,j) moi
		--i;
		j++;
		// di theo huong dong bac
		if( i < 1 && j > n) 
		{
			// Su co Dong Bac: Dien duoi
			i += 2;
			--j;
		}
		else if(i < 1)	i = n;
		else if(j > n) j = 1;
		else if(m[i][j] > 0)
		{
			i+=2;
			j--;	
		}	
		m[i][j] = k;
	}
	print(n);
}

void Go()
{
	fflush(stdin);
	if(cin.get() == '.') exit(0); 
	// nhan phim nhap vao, neu la dau cham thi se dung
}


int main()
{

	for(int n = 1 ; n < 16 ; n+=2)
	{
		oddMagic(n);
		Go();
	}
	return 0;
}

