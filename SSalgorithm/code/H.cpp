#include <bits/stdc++.h>
using namespace std;

int uuTien(char x){
	if(x == '+' || x == '-') return 1;
	if(x == '*' || x == '/') return 2;
	if(x == '^') return 3;
	return 0;
}

string InToPost(string s){
	string ans = "";
	stack <char> st;
	for(int i = 0; i < s.length(); i++){
		char x = s[i];
		if(uuTien(x) == 0){
			if(x == '(')
				st.push(x);
			else if(x == ')'){
					while(st.top() != '('){
						ans = ans + st.top();
						st.pop();
					}
					st.pop();
				}else ans += x;
			
		}else{
			int X = uuTien(x);
			while( !st.empty() && uuTien(st.top()) >= X){
				ans += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		if(st.top() != '(')	ans = ans + st.top();
		st.pop();
	}
	return ans;
}

int main(){
	string s;
	while(cin >> s){	
		cout << InToPost(s) << endl;
	}
}
