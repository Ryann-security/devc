#include<stdio.h>
//nguyen chi viet anh-75DCTTA2-75DCTT22203
int main(){
		int n , sum=0 ; 
		printf("vui long nhap so:");
		scanf("%d",&n);
		for(int i = 1; i <= n ; i++){
			if(i % 2 == 0 ){
				sum = sum +i;
			}
		}
		printf("tong cua cac so chan tu 1 den %d la:%d\n ",n, sum);
}

