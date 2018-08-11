#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;

long long  h[100003];
long long r[100003] , l[100003];
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		for(long long i = 1 ; i <= n ; i++)
			cin >> h[i];
		h[0] = -1;
		h[n+1] = -1;
		for (long long i = 1;i <= n;i++) {
            l[i] = i;
            while (h[l[i]-1] >= h[i]) l[i] = l[ l[i]-1 ];
        }
        for (long long i = n ; i > 0 ; i--) {
            r[i] = i;
            while (h[r[i]+1] >= h[i]) r[i] = r[r[i]+1];
        }
		long long Res = 0 ;
		for(long long i = 1 ; i <= n ; i++) if(Res < h[i]*(r[i] - l[i] + 1) ) Res =h[i] *(r[i] - l[i] + 1);
		 cout << Res << endl;	
	}
	
}

