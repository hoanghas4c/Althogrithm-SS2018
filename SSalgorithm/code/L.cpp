#include <iostream>
#include <math.h>
using namespace std;
int main(){
		long long f[100];
		f[1] =1;
		f[2]=1;
		for(int i =3 ; i < 94 ; i++){
			f[i] = f[i-1] +f[i-2];
		}
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n>>k;
		while(n>4){
			if( k > f[n-2] ){
				k = k -f[n-2];
				n--;
			}
			if(k <= f[n-2]  ) n = n-2;
		}
		if(n == 4){
			if( k == 1 || k ==3) cout<<"B" << endl;
			else cout <<"A"<<endl;
		}
		if(n == 3){
			if(k ==1) cout << "A" << endl;
			else cout << "B" << endl;
		}
		if( n == 2) cout << "B" <<endl;
		if(n == 1) cout << "A" <<endl;
	}
		
}
