#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100001];
		for(int i = 0 ; i < n ; i++) scanf("%d",a+i);
		for(int i = 0 ; i < n ; i++){
			int j = i+1;
			while(j < n && a[j] <= a[i]) j++;
			if(j == n) printf("-1 ");
			else printf("%d ",a[j]);
		}
		printf("\n");
	}
	
}
