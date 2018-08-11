#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int I(char s) {
	if(s == '+' || s == '-') return 1;
	if(s == '*' ||  s == '/') return 2;
	if(s == '^') return 3;
	return 0;
}
int C(string s){
	int n  = s.length();
	stack < char> S;
	for(int i = 0 ; i < n ; i ++){
		if(I(s[i]) == 0){
			if(s[i] == '(') S.push(s[i]);
			if(s[i] == ')' ){
				int oki = 0;
				while( !S.empty() ){
					char x = S.top();
					S.pop();
					if(x == '(') break;
					oki = 1;
				}
				if(oki == 0 ) return 1;
			} 
		}
		else{
			int X = I(s[i]);
			while( !S.empty() ){
				char x = S.top();
				if(I(x) < X) break;
				S.pop();
			}
			S.push(s[i]);
		}
	}
	return 0;
}
int main(){
	string s;
	while(cin >> s){
		if( C(s) ) cout <<"Yes\n";
		else cout << "No\n";
	} 
}

