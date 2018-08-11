#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
void T(string s){
	int n = s.length();
	stack <int> S;
	int k = 1;
	for(int i = 0 ; i < n ; i++){
		if(s[i] == '(') {
			S.push(k);
			cout <<k<<" ";
			k++;
		}
		if(s[i] == ')'){
			int x = S.top();
			S.pop();
			cout << x<<" ";
		}
	}
	cout << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s;
	while(cin >>s){
		T(s);
	}
}

