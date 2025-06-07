#include<stdio.h>
int main(){
	int n, sum=0;
	printf("nhap n:");
	scanf("%d",&n);
	for(int i= 0; i<=n; i++){
		sum=sum+i;
	}
	printf("tong cua tu 1 den %d la:%d ",n,sum);
}
