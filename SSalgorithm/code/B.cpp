#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int b[7];
int c[7];
int Z(int a[]){
	int Ans = 0;
	for(int i  = 1; i <= 6 ; i++ ) 	Ans = Ans*10+a[i];
	return Ans;
}
int C(int n,int k){
	queue <int> Q;
	Q.push(n);
	int dem = 0;
	if( n == k ) return 0;
	while(!Q.empty()){
		int n= Q.size();
		dem++;
		for(int i = 0 ; i < n ; i++){
			int x = Q.front();
			Q.pop();
			int nb = 6;
			while(x != 0){
				b[nb--] = x%10;
				x /= 10;
			} 
			c[1] = b[4]; c[2] = b[1] ; c[3] = b[3]; c[4] = b[5] ; c[5] = b[2]; c[6] = b[6];
			x = Z(c);
			if(x == k ) return dem;
			else Q.push(x);
			c[1] = b[1] ; c[2] = b[5]; c[3 ] = b[2]; c[4] = b[4]; c[5] = b[6]; c[6] = b[3];
			x = Z(c);
			if(x == k) return dem;
			else Q.push(x); 
		}
	}
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a[7],b[7];
	for(int i = 1 ; i < 7 ; i++ ) cin >> a[i];
	for(int i = 1 ; i < 7 ; i++ ) cin >> b[i];
	cout << C(Z(a),Z(b));
	
}

