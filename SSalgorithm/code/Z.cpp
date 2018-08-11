#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int Res[40001],A[201];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	int k;
	cin >>n>>k;
	for(int i = 1 ; i<= n ; i++){
		cin >> A[i];
		Res[A[i]] =1;
	}
	for(int i = 1 ; i <= n ; i++)
		for(int j = k ; j >= A[i] ; j-- ) if(Res[ j - A[i]] == 1) Res[j] = 1;
	if(Res[k]) cout << "YES";
	else cout <<"NO";
}

