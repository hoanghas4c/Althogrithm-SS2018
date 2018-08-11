#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int n,a[17],k,dem;
int C = 0;
int pt =0;
void Resutl(){
	int oki = 0;
	int dem = 0;
	for(int i = 1 ; i <= n ; i++){
		if(a[i] == 0) dem =0;
		else{
			dem++;
			if(dem == k ){
				if(oki == 0 ) oki =1;
				else oki =0; 
			}
			if(dem > k ) oki = 0;
		}
	}
	if(oki == 1){
		if(pt == 0) C++; 
		else {
			for(int i = 1 ; i <= n ; i++) if(a[i]) cout << "A";
							   				else	cout << "B";
			cout <<endl;
		}
	}
	
}
void Try(int i){
	for(int j = 1 ; j > -1 ; j--){
		a[i] = j;
		if(i == n ) 
			Resutl();
		else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >>k;
	Try(1);
	cout << C<<endl;
	pt=1;
	Try(1);
}

