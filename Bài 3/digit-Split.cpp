#include<iostream>
#include <bits/stdc++.h>

using namespace std;


bool d[10];

// Tinh tong cac chu so trong he co so "k"
int H(int n, int k = 10)
{
	int a = n;
	int s = 0;
	do
	{
		s = s + a%k;
		a = a/k;
	}
	while(a);
	
	return s;
}


// Tinh tong cac chu so
int sumSplit(int n)
{
	int s1 = 0;
	int b = n;
	while(b > 0)
	{
		s1 += b%10;
		b = b/10;
	}
	
	return s1;
}

// split every digits of a number
void split(int x)
{
	do
	{
		cout << " " << x%10;
		x /= 10;
	}
	while (x);
}


// Recursion
// Print every digit of n in k-cimal
void kPrint(int n, int k = 10)
{
	if (n < k)
	{
		cout << n;
		return;
	}
	kPrint(n/k,k);
	cout  << (n % k) ;
}

//Reverse a number
//Ex : rev(2000)=2;
/*----------------------------
	x				y	
	1234        	0
	123				4
	12				43
	1				432
	0				4321

------------------------------*/
int rev(int n)
{
	int x = 0;
	while(n>0)
	{
		x = x*10 + n%10;
		n = n/10;
	}
	
	return x;
}

// Ham check so Palidrome ( so thuan nghich)
bool Pal(int x)
{
	return rev(x) == x;
}




// Flag technique
// Xet xem co chu so nao cua b trong d[]
	// d: 0 1 2 3 4 5 6 7 8 9
	// pattern: 2089
	// d : 0 1 2 3 4 5 6 7 8 9
	//     t f t f f f f f t t ( check the digits)
	// t : true(1), f : false(0)
	
// Ham xet chu so khong bi trung nhau
int notInter(int b)
{
	while(b)
	{
		if(d[b %10]) return false;
		b /= 10;
	}
	
	return true;
}


// Bruto Force / No luc thuan thuy
// find number in a range without digits in common
int digitCom(int pattern, int lim)
{
	int count = 0;
	memset(d, false, sizeof(d)); 
	/* 
		Gan false cho moi phan tu trong d
	*/
	while(pattern)
	{
		d[pattern % 10] = 1;
		pattern /= 10;
	}
	
	for(int i = 1; i < lim ; i++)
	{
		count+= notInter(i);
	}
	
	return count;
}

int main()
{
//	int n = 0;
//	int k = 10;
//	cin >> n;
//	cin >> k;
//	
	cout << digitCom(13522, 4000000);
	return 0;
}

