#include <iostream>
using namespace std;
int dem =0;
int n,cot[21],nguoc[21],xuoi[21];
void Try(int i){
	for(int j = 1; j <=n ; j++ ){
		if(cot[j]==1 && nguoc[i+j-1] == 1 && xuoi[i-j+n] == 1){
			cot[j] = 0;
			nguoc[i+j-1] = 0;
			xuoi[i-j+n] = 0;
			if(i == n) {
				dem++;
			}
			else{
				Try(i+1);
			}
			cot[j] = 1;
			nguoc[i+j-1] = 1;
			xuoi[i-j+n] = 1;
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1 ; i < 21 ; i++) {
		cot[i] = 1;
		nguoc[i] = 1;
		xuoi[i] = 1;
	}
	Try(1);
	cout<< dem<< endl;
}
