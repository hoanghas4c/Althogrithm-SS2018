#include<iostream>
#include<stdio.h>
#include<math.h>
#define nn 2000000

/* Day la ba toan tinh tong cua cac so nguyen to < n */

bool print = true ; // Gan bien bool print = True

// neu gan print = False ==> Khong thuc hien lenh

bool d[nn + 1] = {0}; // Mang danh dau cho tat ca cac phan tu = 0


// Day la function loc so nguyen to va tinh tong 
void prime(int n)
{
	//B1:  loc so nguyen to dung mang danh dau\
	
	//Phuong phap : se tinh cac so tu dau va loai bo hoan toan Boi cua chung
	// vdu i = 2 thi se loai bo 4,6,8...
	int i = 2;
	while(i <= n/2)
	{
		if(d[i]==0)
		{
			for(int j = i*2 ; j <= n ; j+=i)
			{
				// Dung mang dnah dau, khi j chay den cac boi cua i
				// lap tuc d[j] = 1;
				d[j] = 1;
			}
		}
		i++;
	}
	
	//B2: tinh tong
	
	unsigned long long s = 2;
	for(int i = 3; i <= n ; i++)
	{
		if(!d[i])	s = s + i;
	}
	printf("%lld", s);
}


int main()
{
	int n;
	scanf("%d",&n);
	prime(n);
	return 0;
}

