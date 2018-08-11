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
void Resutl(){
	for(int i = 1 ; i <= n ; i++) cout << a[i];
	cout <<endl;
}
void Try(int i ){
	for(int j = 0 ; j < 2 ; j++){
		dem += j;
		a[i] = j;
		if(i == n ) {
			if(k == dem)
				Resutl();
		} 
		else Try(i+1);
		dem -= j;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		cin >> n >>k;
		Try(1);
	}
}

