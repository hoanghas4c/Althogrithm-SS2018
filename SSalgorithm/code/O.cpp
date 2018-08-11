#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define ll long long
#define Base 1000000007
const  long long Max = 1e18+7;
using namespace std;
long long a[1000000],na = 0;
long long X(int key){
	int Res = -1;
	long long l = 0 ,  r = na-1;
	while(r >= l){
		long long m = (r+l)/2;
		if(key <= a[m]){
			Res = m;
			r = m-1;
		}
		else l = m+1;
	}
	return Res;
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		long long key;
		cin >> na >> key;
		for(int i = 0 ; i < na ; i++) cin >> a[i];
		if( a[X(key)] == key) cout << X(key)+1 <<endl;
		else cout << "NO\n";
	
	}

}

