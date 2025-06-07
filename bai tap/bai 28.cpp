#include<stdio.h>
int main(){
	int n, tong=0;
	printf("nhap so nguyen duong:");
	scanf("%d",&n);
	for(int i = 1 ;i<=2*n+1; i+=2 ){
		tong= tong +i;
	}
	printf("%d",tong);
}
