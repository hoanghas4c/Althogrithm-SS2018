#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
void T(int k){
	queue <string> Q;
	Q.push("1");
	while(k--){
		string x = Q.front();
		Q.pop();
		cout << x <<" ";
		Q.push(x+'0');
		Q.push(x+'1');
	}
	cout << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		T(n);
	}
	
}

