#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
long long Try(long long n){
	if( n <=  0 ) return 0;
	if(n < 10 )  return 1;
	int mu = log10(n);
	long long T = (long long ) pow(10,mu);
	if( n / T > 1 ) return (long long) pow(2,mu+1)-1;
	else return (long long ) pow(2,mu) + Try(n-T);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << Try(n)<<endl;
	}
}

