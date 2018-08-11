#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int Res[1001],A[1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >>n;
	for(int i = 1 ; i<= n ; i++) cin >> A[i];
	for(int i = 0 ; i <= n ; i++){
		int M = 0;
		for(int j = i ; j > 0 ; j-- ) if( A[i] > A[j] &&Res[j] > M) M = Res[j];
		Res[i] = M+1;
	}
	int M = 0;
	for(int i = 1 ; i <= n ; i++) if(Res[i] > M ) M = Res[i];
	cout << M ;
}

