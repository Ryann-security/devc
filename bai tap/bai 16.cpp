#include<stdio.h>
int main(){
	int n; 
	int tong=0 ;
	printf("nhap n de tinh bieu thuc duoi day\n");
	printf("T=1*2+2*3+ +n*(n+1):");
	scanf("%d",&n);
	for(int i = 1; i<=n;i++){
		tong+=i*(i+1);
	}
	printf("ket qua voi gia tri bieu thuc T la:%d\n",tong);
}
