#include <iostream>
using namespace std;
int n,chuaxet[20],a[20] , c[20][20];
long long m =10000000000,sum =0,d=100000000;

void Try(int i){
	for(int j = 2 ; j <= n ; j++){
		if(chuaxet[j] != 1){
			a[i] = j;
			sum+=c[a[i-1]][a[i]];
			chuaxet[j]=1;
			if(i == n) {
				sum +=c[a[n]][1];
				if(sum < m) m =sum;
				sum -=c[a[n]][1];
			}
			else if(sum + (n-i+1)*d < m )	Try(i+1);
			chuaxet[j]=0;
			sum	-= c[a[i-1]][a[i]];		
		}
	}
}
int main(){
	cin >>n;
	a[1]=1;
	for(int i =1 ; i <= n ; i++ )
		for(int j = 1 ; j <= n ; j++) {
			cin >> c[i][j];
			if(i!=j &&c[i][j] < d) d =c[i][j];
		}
	Try(2);
	cout<< m<< endl;
}
