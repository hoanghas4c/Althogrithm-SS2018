#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
long long C(long long x,long long n){
	if(n == 0) return 1;
	if(n == 1) return x;
	long long T = C(x,n/2);
	T= T*T%Base;
	if(n%2) return (x*T)%Base;
	return T;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n>>k;
		cout << C(n,k)<<endl;
	}
}

