#include <iostream>
using namespace std;
int cot[11],hang[11],a[11],c[11][11],b[10][11],nb=0,n,k,sum=0;
void Try(int i ){
	for(int j = 1; j <=n ; j++){
		if(cot[j] != 1 && hang[j] !=1){
			a[i]=j;
			sum +=c[i][a[i]];
			cot[j]=1;
			hang[j]=1;
			if(i == n){
				if(sum == k){
					for(int x=1;x<=n;x++) b[nb][x] =a[x];
					nb++;
				}
			}
			else	Try(i+1);
			sum -=c[i][a[i]];
			cot[j]=0;
			hang[j]=0;
		}
	}
	
}
int main(){
	cin >> n>>k;
	for(int i = 1; i <=n ; i++)
		for(int j = 1; j <=n ; j++) cin >> c[i][j];
	Try(1);
	cout <<nb<< endl;
	for(int i =0 ; i<nb;i++){
		for(int j = 1; j <= n ; j++) cout << b[i][j]<<" ";
		cout << endl;
	}
	
}
