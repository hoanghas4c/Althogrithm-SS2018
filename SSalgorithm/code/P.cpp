#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int a[26];
long long C(string s,int k){
	for(int i = 0 ; s[i] != '\0' ; i++) a[s[i] - 'A']++;
	priority_queue <int > Q;
	for(int i = 0 ; i < 26 ; i++) Q.push(a[i]);
	while(k--){
		int x = Q.top();
		x--;
		Q.pop();
		Q.push(x);
	}
	long long Res =0;
	while(!Q.empty()){
		int x = Q.top();
		Res += x*x;
		Q.pop();
	}
	return Res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >>t;
	while(t--){
		for(int i = 0 ; i < 26 ; i++) a[i] = 0;
		string s;
		int k;
		cin >>k >>s;
		if(k >=  s.length()) cout << 0<<endl;
		else
			cout << C(s,k)<<endl;
	}
}

