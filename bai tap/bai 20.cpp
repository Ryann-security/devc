#include<stdio.h>
int main(){
	int n;
	int tich=1; 
		printf("nhap so nguyen n: ");
		scanf("%d",&n);
	if(n % 2 == 0){
		for(int i = 2; i <= n ; i += 2){
			tich=tich*i;
		}
	}else
		for(int i = 1; i <= n; i+= 2 ){
			tich=tich*i;
		}
		printf("tich cua gia tri %d la:%d\n ",n,tich);
}
