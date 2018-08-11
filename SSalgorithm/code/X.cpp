#include <stdio.h>
#include <string.h>
char s1[100000], s2[100000];
void Inint(){
	scanf("%s",&s1);
	scanf("%s",&s2);
}
int a[100000];
int Process(){
	int n1 = strlen(s1), n2 = strlen(s2),i , j;
	int Rbr1, Rbr2;
		Rbr1 = Rbr2 = 0;
	for(i = 0 ; i < n1; i++){
		Rbr1=a[0];
		for(j = 1 ; j <= n2;j++ ){
			Rbr2 = a[j];
			if(s1[i] == s2[j-1] ) a[j]= Rbr1+1;
			else
				a[j] = a[j] > a[j-1]  ? a[j] : a[j-1];
			Rbr1 = Rbr2;
		}
	}
	return a[n2];
}
int main(){
	Inint();
	printf("%d",Process());
}
