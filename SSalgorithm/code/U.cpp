#include <iostream>
#define N 1000000007
using namespace std;
typedef struct {
	long long a[11][11]; 
} data;
data nhan(data A,data B,int n){
	data C;
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++) C.a[i][j] = 0;
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < n; j++)
			for(int k = 0 ; k < n ; k++){
				C.a[i][j] =C.a[i][j]+ A.a[i][k]*B.a[k][j];
				C.a[i][j] =C.a[i][j] %N;
			}
	}
	return C;
}
data Try(data A,int n,int k){
	if(k == 1) return A;
	else{
		data temp = Try(A,n,k/2);
		if(k%2) {
			temp = nhan(temp,temp,n) ;
			return nhan(A,temp,n);
		}
		return nhan(temp,temp,n);
	}
 }
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		data A;
		for(int i = 0 ; i < n ; i++)
			for(int j = 0 ; j < n ; j++) cin >> A.a[i][j] ;
		data B =Try(A,n,k);
			for(int i = 0 ; i < n ; i++){
				for(int j = 0 ; j < n ; j++){
					cout << B.a[i][j] <<" ";
				}
				cout <<endl;
			}
			
	}
}
