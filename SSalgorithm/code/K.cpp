#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,k,a[60];
		a[1] =1;
		int na =1;
		cin>> n>>k;
		for(int i =2 ; i<=n; i++){
			a[i] =2*a[i-1]+1;
		}
		na=n;
		na--;
		while(k-1 != a[na]){
			if(k > a[na]) k = k-a[na]-1;
			n--;
			na--;
			if( k == 1) {
				n = 1;
				break;
			}
		}
		cout << n << endl;
	}
	
}
