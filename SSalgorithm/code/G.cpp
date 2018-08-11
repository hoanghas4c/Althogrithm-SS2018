#include <bits/stdc++.h>
using namespace std;
	typedef	struct{
		int x;
		int y;
	}data;
int tmp(data a,data b){
	return a.y < b.y;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,nb=1;
		cin >> n;
		data 	a[n+1],b[n+1];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i].x>>a[i].y;
		
		}
		sort(a,a+n,tmp);
		b[0] = a[0];
		for(int i = 1 ; i < n ; i++){
			int oki =1;
			for(int j = 0 ; j < nb ; j++){
				if(!(a[i].y<=b[j].x|| a[i].x>=b[j].y)){
				oki = 0;
				break;
			}
			}
		if(oki == 1)
			b[nb++] =a[i];
		
		}
		cout<< nb << endl;
	}
}
