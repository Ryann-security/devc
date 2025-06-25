#include<stdio.h>
int main(){
	int n;
	int t=1; 
		printf("nhap so nguyen n: ");
		scanf("%d",&n);
	if(n % 2 == 0){
		for(int i = 2; i <= n ; i += 2){
			t=t*i;
		}
	}else
		for(int i = 1; i <= n; i+= 2 ){
			t=t*i;
		}
		printf("tich cua gia tri %d la:%d\n ",n,t);
}
