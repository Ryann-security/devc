#include<stdio.h>
int main(){
	int n, tich=1;
	printf("nhap n:");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++ ){
		tich=tich*i;
	}
	printf("kq tich tu 1 den %d la: %d ",n,tich);
}
